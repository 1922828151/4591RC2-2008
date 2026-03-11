/*
 * func-name: ?write@OS_Buffer@Utility@Outpop@@QAEHPBDHH@Z
 * func-address: 0x1000eb00
 * callers: none
 * callees: 0x10019580
 */

size_t __thiscall Outpop::Utility::OS_Buffer::write(
        Outpop::Utility::OS_Buffer *this,
        const char *Src,
        int a3,
        size_t Size)
{
  if ( (signed int)(a3 + Size) > *((_DWORD *)this + 1) )
    return -1;
  memcpy((void *)(a3 + *(_DWORD *)this), Src, Size);
  return Size;
}
