#!/usr/bin/env python3
"""
supplement_from_lst.py - Supplement failed/skipped decompiled functions with IDA listing assembly.

This script reads IDA Pro .lst (listing) files and generates assembly-annotated .c files
for functions that failed to decompile or were skipped during the initial export.

Usage:
    python supplement_from_lst.py <module_dir> <lst_file> [options]

Examples:
    # Supplement only failed functions for Gamedll
    python supplement_from_lst.py Gamedll Game.lst

    # Supplement both failed and skipped functions
    python supplement_from_lst.py Gamedll Game.lst --include-skipped

    # Supplement all modules using .lst files in a directory
    python supplement_from_lst.py --batch --lst-dir ./lst_files

    # Only process skipped functions (not failed)
    python supplement_from_lst.py Gamedll Game.lst --only-skipped

    # Dry run - show what would be generated without writing files
    python supplement_from_lst.py Gamedll Game.lst --dry-run

    # Force overwrite existing files
    python supplement_from_lst.py Gamedll Game.lst --force
"""

import argparse
import os
import re
import sys
from collections import OrderedDict


# ============================================================================
# IDA .lst file parser
# ============================================================================

# Pattern: segment:address  (e.g., ".text:10001000", "seg000:10001000")
LINE_ADDR_RE = re.compile(
    r'^[\w.]+:([0-9A-Fa-f]{8,})\s*(.*)'
)

# Pattern: function start - "funcname proc near/far"
PROC_START_RE = re.compile(
    r'^([\w@?$]+)\s+proc\s+(near|far)', re.IGNORECASE
)

# Pattern: function end - "funcname endp"
PROC_END_RE = re.compile(
    r'^([\w@?$]+)\s+endp', re.IGNORECASE
)

# Pattern: subroutine separator comment
SUBROUTINE_SEP_RE = re.compile(
    r';\s*={5,}\s*S\s*U\s*B\s*R\s*O\s*U\s*T\s*I\s*N\s*E'
)

# Pattern: "public" declaration with function name
PUBLIC_RE = re.compile(
    r'public\s+([\w@?$]+)', re.IGNORECASE
)


def parse_lst_file(lst_path, target_addresses=None, encoding='utf-8'):
    """
    Parse an IDA .lst file and extract function assembly listings.

    Args:
        lst_path: Path to the .lst file
        target_addresses: Optional set of addresses (int) to extract.
                          If None, extracts all functions.
        encoding: File encoding (try 'utf-8', 'latin-1', 'cp1252' if needed)

    Returns:
        dict: {address_int: FunctionInfo} where FunctionInfo contains:
              - name: function name
              - address: start address (int)
              - lines: list of raw assembly lines
              - end_address: end address (int) or None
    """
    functions = OrderedDict()
    current_func = None
    current_lines = []
    current_addr = None
    current_name = None
    pre_proc_lines = []  # lines between subroutine separator and proc

    # Try multiple encodings
    encodings_to_try = [encoding, 'utf-8', 'latin-1', 'cp1252', 'gbk', 'gb2312']
    file_lines = None

    for enc in encodings_to_try:
        try:
            with open(lst_path, 'r', encoding=enc, errors='replace') as f:
                file_lines = f.readlines()
            break
        except (UnicodeDecodeError, LookupError):
            continue

    if file_lines is None:
        print(f"Error: Could not read {lst_path} with any supported encoding")
        return functions

    total_lines = len(file_lines)
    print(f"  Parsing {total_lines} lines from {os.path.basename(lst_path)}...")

    in_func = False
    last_addr_in_func = None

    for line_num, raw_line in enumerate(file_lines):
        line = raw_line.rstrip('\n\r')

        # Try to extract address from the line
        addr_match = LINE_ADDR_RE.match(line)
        line_addr = None
        line_content = ''
        if addr_match:
            try:
                line_addr = int(addr_match.group(1), 16)
            except ValueError:
                pass
            line_content = addr_match.group(2).strip()

        # Check for subroutine separator (precedes a function)
        if SUBROUTINE_SEP_RE.search(line):
            pre_proc_lines = [line]
            continue

        # Check for proc start (before tracking pre-proc lines to avoid duplication)
        proc_match = PROC_START_RE.match(line_content) if line_content else None
        if proc_match and line_addr is not None:
            func_name = proc_match.group(1)

            # If we have a target set, check if this address is interesting
            if target_addresses is not None and line_addr not in target_addresses:
                in_func = False
                pre_proc_lines = []
                continue

            in_func = True
            current_addr = line_addr
            current_name = func_name
            current_lines = list(pre_proc_lines)  # include header lines
            current_lines.append(line)
            last_addr_in_func = line_addr
            pre_proc_lines = []
            continue

        # Track pre-proc lines (comments, var declarations before proc)
        if not in_func and line_content:
            pre_proc_lines.append(line)

        # Check for endp
        if in_func and line_content:
            endp_match = PROC_END_RE.match(line_content)
            if endp_match:
                current_lines.append(line)
                # Store the function
                functions[current_addr] = {
                    'name': current_name,
                    'address': current_addr,
                    'lines': current_lines,
                    'end_address': last_addr_in_func,
                }
                in_func = False
                current_lines = []
                pre_proc_lines = []
                continue

        # Accumulate lines inside a function
        if in_func:
            current_lines.append(line)
            if line_addr is not None:
                last_addr_in_func = line_addr

        # Progress reporting for large files
        if (line_num + 1) % 500000 == 0:
            print(f"    ... processed {line_num + 1}/{total_lines} lines, "
                  f"found {len(functions)} functions so far")

    # Handle case where last function has no endp
    if in_func and current_addr is not None:
        functions[current_addr] = {
            'name': current_name,
            'address': current_addr,
            'lines': current_lines,
            'end_address': last_addr_in_func,
        }

    return functions


# ============================================================================
# Failed/Skipped file parsers
# ============================================================================

def parse_failed_file(filepath):
    """
    Parse decompile_failed.txt.

    Returns:
        list of (address_int, func_name, reason)
    """
    results = []
    if not os.path.isfile(filepath):
        return results

    with open(filepath, 'r', encoding='utf-8') as f:
        for line in f:
            line = line.strip()
            if not line or line.startswith('#'):
                continue
            parts = [p.strip() for p in line.split('|')]
            if len(parts) >= 3:
                try:
                    addr = int(parts[0], 16)
                    name = parts[1]
                    reason = parts[2]
                    results.append((addr, name, reason))
                except ValueError:
                    continue
    return results


def parse_skipped_file(filepath):
    """
    Parse decompile_skipped.txt.

    Returns:
        list of (address_int, func_name, reason)
    """
    return parse_failed_file(filepath)  # Same format


def parse_function_index(filepath):
    """
    Parse function_index.txt to extract caller/callee info.

    Returns:
        dict: {address_int: {'callers': [...], 'callees': [...]}}
    """
    index = {}
    if not os.path.isfile(filepath):
        return index

    current_addr = None
    section = None  # 'callers' or 'callees'

    with open(filepath, 'r', encoding='utf-8') as f:
        for line in f:
            line = line.rstrip('\n\r')

            # Function header
            addr_match = re.match(r'^Address:\s*0x([0-9A-Fa-f]+)', line)
            if addr_match:
                current_addr = int(addr_match.group(1), 16)
                if current_addr not in index:
                    index[current_addr] = {'callers': [], 'callees': []}
                continue

            if 'Called by' in line:
                section = 'callers'
                continue
            if 'Calls' in line:
                section = 'callees'
                continue

            # Separator
            if line.startswith('==='):
                section = None
                continue

            # Caller/callee entry
            if current_addr and section:
                ref_match = re.match(r'\s*-\s*0x([0-9A-Fa-f]+)', line)
                if ref_match:
                    ref_addr = ref_match.group(1)
                    index[current_addr][section].append(f"0x{ref_addr}")

    return index


# ============================================================================
# Output generation
# ============================================================================

def format_asm_c_file(func_name, address, reason, asm_lines, callers=None, callees=None):
    """
    Generate a .c file content with assembly listing as comments.
    Matches the existing header format of decompiled files.
    """
    addr_hex = f"0x{address:08x}"

    callers_str = ', '.join(callers) if callers else 'none'
    callees_str = ', '.join(callees) if callees else 'none'

    source_label = "IDA listing (decompile failed)" if "failed" in reason.lower() or "None" in reason else \
                   f"IDA listing ({reason})"

    lines = []
    lines.append('/*')
    lines.append(f' * func-name: {func_name}')
    lines.append(f' * func-address: {addr_hex}')
    lines.append(f' * source: {source_label}')
    lines.append(f' * callers: {callers_str}')
    lines.append(f' * callees: {callees_str}')
    lines.append(' */')
    lines.append('')
    lines.append('/*')
    lines.append(' * Assembly listing from IDA:')
    lines.append(' *')

    for asm_line in asm_lines:
        # Clean up the line for embedding in a comment
        clean = asm_line.rstrip()
        # Escape any */ sequences that could break the comment block
        clean = clean.replace('*/', '* /')
        if clean:
            lines.append(f' * {clean}')
        else:
            lines.append(' *')

    lines.append(' */')
    lines.append('')

    return '\n'.join(lines)


def format_placeholder_c_file(func_name, address, reason, callers=None, callees=None):
    """
    Generate a placeholder .c file when no assembly listing was found in the .lst file.
    """
    addr_hex = f"0x{address:08x}"

    callers_str = ', '.join(callers) if callers else 'none'
    callees_str = ', '.join(callees) if callees else 'none'

    lines = []
    lines.append('/*')
    lines.append(f' * func-name: {func_name}')
    lines.append(f' * func-address: {addr_hex}')
    lines.append(f' * source: not found in IDA listing')
    lines.append(f' * original-status: {reason}')
    lines.append(f' * callers: {callers_str}')
    lines.append(f' * callees: {callees_str}')
    lines.append(' */')
    lines.append('')
    lines.append('/* Assembly listing not available - function not found in .lst file */')
    lines.append('')

    return '\n'.join(lines)


def addr_to_filename(address):
    """Convert an integer address to the .c filename convention (uppercase hex)."""
    return f"{address:08X}.c"


# ============================================================================
# Main processing
# ============================================================================

def process_module(module_dir, lst_file, include_skipped=True, include_failed=True,
                   dry_run=False, force=False, write_placeholders=False):
    """
    Process a single module directory.

    Args:
        module_dir: Path to the module directory (e.g., 'Gamedll/')
        lst_file: Path to the .lst file
        include_skipped: Whether to process skipped functions
        include_failed: Whether to process failed functions
        dry_run: If True, only report what would be done
        force: If True, overwrite existing files
        write_placeholders: If True, write placeholder files for functions not found in .lst

    Returns:
        dict with statistics
    """
    module_name = os.path.basename(os.path.normpath(module_dir))
    decompile_dir = os.path.join(module_dir, 'decompile')
    failed_file = os.path.join(module_dir, 'decompile_failed.txt')
    skipped_file = os.path.join(module_dir, 'decompile_skipped.txt')
    index_file = os.path.join(module_dir, 'function_index.txt')

    print(f"\n{'='*70}")
    print(f"Processing module: {module_name}")
    print(f"{'='*70}")

    if not os.path.isdir(decompile_dir):
        print(f"Error: decompile directory not found: {decompile_dir}")
        return None

    # Collect target functions
    targets = []  # (address, name, reason, source_type)

    if include_failed and os.path.isfile(failed_file):
        failed = parse_failed_file(failed_file)
        print(f"  Found {len(failed)} failed functions")
        for addr, name, reason in failed:
            targets.append((addr, name, reason, 'failed'))
    elif include_failed:
        print(f"  No decompile_failed.txt found")

    if include_skipped and os.path.isfile(skipped_file):
        skipped = parse_skipped_file(skipped_file)
        print(f"  Found {len(skipped)} skipped functions")
        for addr, name, reason in skipped:
            targets.append((addr, name, reason, 'skipped'))
    elif include_skipped:
        print(f"  No decompile_skipped.txt found")

    if not targets:
        print("  No target functions to process")
        return {'module': module_name, 'targets': 0, 'found': 0,
                'written': 0, 'skipped_existing': 0, 'not_found': 0}

    # Build target address set
    target_addrs = {addr for addr, _, _, _ in targets}
    print(f"  Total target functions: {len(targets)}")

    # Parse function index for caller/callee info
    print(f"  Loading function index...")
    func_index = parse_function_index(index_file)

    # Parse .lst file
    if not os.path.isfile(lst_file):
        print(f"Error: .lst file not found: {lst_file}")
        return None

    file_size_mb = os.path.getsize(lst_file) / (1024 * 1024)
    print(f"  Loading .lst file ({file_size_mb:.1f} MB)...")
    lst_functions = parse_lst_file(lst_file, target_addresses=target_addrs)
    print(f"  Found {len(lst_functions)} matching functions in .lst file")

    # Generate output files
    stats = {
        'module': module_name,
        'targets': len(targets),
        'found': 0,
        'written': 0,
        'skipped_existing': 0,
        'not_found': 0,
        'not_found_list': [],
    }

    for addr, name, reason, source_type in targets:
        filename = addr_to_filename(addr)
        filepath = os.path.join(decompile_dir, filename)

        # Check if file already exists
        if os.path.isfile(filepath) and not force:
            stats['skipped_existing'] += 1
            continue

        # Look up caller/callee info
        idx_info = func_index.get(addr, {})
        callers = idx_info.get('callers', [])
        callees = idx_info.get('callees', [])

        if addr in lst_functions:
            # Found in .lst - generate assembly file
            func_info = lst_functions[addr]
            content = format_asm_c_file(
                func_name=name,
                address=addr,
                reason=reason,
                asm_lines=func_info['lines'],
                callers=callers if callers else None,
                callees=callees if callees else None,
            )
            stats['found'] += 1
        elif write_placeholders:
            # Not found - generate placeholder
            content = format_placeholder_c_file(
                func_name=name,
                address=addr,
                reason=reason,
                callers=callers if callers else None,
                callees=callees if callees else None,
            )
            stats['not_found'] += 1
        else:
            stats['not_found'] += 1
            stats['not_found_list'].append((addr, name))
            continue

        if dry_run:
            print(f"  [DRY RUN] Would write: {filename} "
                  f"({'assembly' if addr in lst_functions else 'placeholder'})")
            stats['written'] += 1
        else:
            with open(filepath, 'w', encoding='utf-8') as f:
                f.write(content)
            stats['written'] += 1

    return stats


def find_lst_for_module(module_name, lst_dir):
    """
    Try to find a matching .lst file for a module in the given directory.
    Tries various naming conventions.
    """
    module_lower = module_name.lower()

    # Try exact match patterns
    candidates = [
        module_name + '.lst',
        module_lower + '.lst',
        module_name.replace('dll', '.lst'),
        module_lower.replace('dll', '.lst'),
        module_name.replace('exe', '.lst'),
        module_lower.replace('exe', '.lst'),
        module_name.replace('dll', '') + '.lst',
        module_lower.replace('dll', '') + '.lst',
        module_name.replace('exe', '') + '.lst',
        module_lower.replace('exe', '') + '.lst',
    ]

    for candidate in candidates:
        path = os.path.join(lst_dir, candidate)
        if os.path.isfile(path):
            return path

    # Try fuzzy match - any .lst file containing the module base name
    base_name = module_lower.replace('dll', '').replace('exe', '')
    if os.path.isdir(lst_dir):
        for f in os.listdir(lst_dir):
            if f.lower().endswith('.lst') and base_name in f.lower():
                return os.path.join(lst_dir, f)

    return None


def main():
    parser = argparse.ArgumentParser(
        description='Supplement failed/skipped decompiled functions with IDA .lst assembly listings.',
        formatter_class=argparse.RawDescriptionHelpFormatter,
        epilog="""
Examples:
  %(prog)s Gamedll Game.lst                    # Failed functions only
  %(prog)s Gamedll Game.lst --include-skipped  # Failed + skipped functions
  %(prog)s Gamedll Game.lst --only-skipped     # Skipped functions only
  %(prog)s --batch --lst-dir ./lst_files       # Process all modules
  %(prog)s Gamedll Game.lst --dry-run          # Preview without writing
  %(prog)s Gamedll Game.lst --force            # Overwrite existing files
  %(prog)s Gamedll Game.lst --placeholders     # Write placeholders for missing funcs
        """
    )

    # Positional arguments (optional when using --batch)
    parser.add_argument('module_dir', nargs='?',
                        help='Module directory (e.g., Gamedll)')
    parser.add_argument('lst_file', nargs='?',
                        help='Path to the IDA .lst file')

    # Batch mode
    parser.add_argument('--batch', action='store_true',
                        help='Process all modules in the repo directory')
    parser.add_argument('--lst-dir', default='.',
                        help='Directory containing .lst files (for --batch mode)')
    parser.add_argument('--repo-dir', default='.',
                        help='Repository root directory (default: current directory)')

    # Function selection
    parser.add_argument('--include-skipped', action='store_true',
                        help='Also process skipped (library) functions')
    parser.add_argument('--only-skipped', action='store_true',
                        help='Only process skipped functions (not failed)')

    # Output options
    parser.add_argument('--dry-run', action='store_true',
                        help='Show what would be done without writing files')
    parser.add_argument('--force', action='store_true',
                        help='Overwrite existing .c files')
    parser.add_argument('--placeholders', action='store_true',
                        help='Write placeholder files for functions not found in .lst')
    parser.add_argument('--encoding', default='utf-8',
                        help='Encoding of .lst files (default: utf-8)')

    args = parser.parse_args()

    # Determine what to include
    include_failed = not args.only_skipped
    include_skipped = args.include_skipped or args.only_skipped

    if args.batch:
        # Batch mode: process all module directories
        repo_dir = args.repo_dir
        lst_dir = args.lst_dir

        # Find all module directories (directories containing decompile/)
        module_dirs = []
        for entry in sorted(os.listdir(repo_dir)):
            full_path = os.path.join(repo_dir, entry)
            if os.path.isdir(full_path) and os.path.isdir(os.path.join(full_path, 'decompile')):
                module_dirs.append(full_path)

        if not module_dirs:
            print(f"Error: No module directories found in {repo_dir}")
            sys.exit(1)

        print(f"Found {len(module_dirs)} module directories")

        all_stats = []
        for module_dir in module_dirs:
            module_name = os.path.basename(module_dir)
            lst_file = find_lst_for_module(module_name, lst_dir)

            if lst_file is None:
                print(f"\nWarning: No .lst file found for {module_name} in {lst_dir}")
                print(f"  Tried patterns like: {module_name}.lst, "
                      f"{module_name.replace('dll', '.lst')}, etc.")
                continue

            print(f"\n  Matched: {module_name} -> {os.path.basename(lst_file)}")
            stats = process_module(
                module_dir=module_dir,
                lst_file=lst_file,
                include_skipped=include_skipped,
                include_failed=include_failed,
                dry_run=args.dry_run,
                force=args.force,
                write_placeholders=args.placeholders,
            )
            if stats:
                all_stats.append(stats)

        # Print summary
        print(f"\n{'='*70}")
        print("BATCH SUMMARY")
        print(f"{'='*70}")
        total_targets = sum(s['targets'] for s in all_stats)
        total_found = sum(s['found'] for s in all_stats)
        total_written = sum(s['written'] for s in all_stats)
        total_existing = sum(s['skipped_existing'] for s in all_stats)
        total_not_found = sum(s['not_found'] for s in all_stats)

        for s in all_stats:
            print(f"  {s['module']:25s}: {s['written']:4d} written, "
                  f"{s['skipped_existing']:4d} existing, "
                  f"{s['not_found']:4d} not in .lst")

        print(f"  {'TOTAL':25s}: {total_written:4d} written, "
              f"{total_existing:4d} existing, "
              f"{total_not_found:4d} not in .lst")
        print(f"\n  Targets: {total_targets}, Found in .lst: {total_found}")

    else:
        # Single module mode
        if not args.module_dir or not args.lst_file:
            parser.error("module_dir and lst_file are required (unless using --batch)")

        module_dir = args.module_dir
        lst_file = args.lst_file

        if not os.path.isdir(module_dir):
            print(f"Error: Module directory not found: {module_dir}")
            sys.exit(1)

        if not os.path.isfile(lst_file):
            print(f"Error: .lst file not found: {lst_file}")
            sys.exit(1)

        stats = process_module(
            module_dir=module_dir,
            lst_file=lst_file,
            include_skipped=include_skipped,
            include_failed=include_failed,
            dry_run=args.dry_run,
            force=args.force,
            write_placeholders=args.placeholders,
        )

        if stats:
            print(f"\n{'='*70}")
            print("SUMMARY")
            print(f"{'='*70}")
            print(f"  Module:           {stats['module']}")
            print(f"  Target functions: {stats['targets']}")
            print(f"  Found in .lst:    {stats['found']}")
            print(f"  Files written:    {stats['written']}")
            print(f"  Already existed:  {stats['skipped_existing']}")
            print(f"  Not in .lst:      {stats['not_found']}")

            if stats['not_found_list']:
                print(f"\n  Functions not found in .lst file:")
                for addr, name in stats['not_found_list'][:20]:
                    print(f"    0x{addr:08X} | {name}")
                if len(stats['not_found_list']) > 20:
                    print(f"    ... and {len(stats['not_found_list']) - 20} more")


if __name__ == '__main__':
    main()
