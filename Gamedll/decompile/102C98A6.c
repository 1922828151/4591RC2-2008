/*
 * func-name: CreateFileA
 * func-address: 0x102c98a6
 * callers: none
 * callees: none
 */

// attributes: thunk
HANDLE __stdcall CreateFileA(
        LPCSTR lpFileName,
        DWORD dwDesiredAccess,
        DWORD dwShareMode,
        LPSECURITY_ATTRIBUTES lpSecurityAttributes,
        DWORD dwCreationDisposition,
        DWORD dwFlagsAndAttributes,
        HANDLE hTemplateFile)
{
  return __imp_CreateFileA(
           lpFileName,
           dwDesiredAccess,
           dwShareMode,
           lpSecurityAttributes,
           dwCreationDisposition,
           dwFlagsAndAttributes,
           hTemplateFile);
}
