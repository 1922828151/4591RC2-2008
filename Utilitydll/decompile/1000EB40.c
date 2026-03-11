/*
 * func-name: ?read@OS_Buffer@Utility@Outpop@@QAEHPADHH@Z
 * func-address: 0x1000eb40
 * callers: none
 * callees: 0x10019580
 */

size_t __thiscall Outpop::Utility::OS_Buffer::read(Outpop::Utility::OS_Buffer *this, char *a2, int a3, size_t Size)
{
  if ( (signed int)(a3 + Size) > *((_DWORD *)this + 1) )
    return -1;
  memcpy(a2, (const void *)(a3 + *(_DWORD *)this), Size);
  return Size;
}
