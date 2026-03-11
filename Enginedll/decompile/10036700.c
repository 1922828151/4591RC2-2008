/*
 * func-name: sub_10036700
 * func-address: 0x10036700
 * callers: 0x10034b70, 0x10034c30, 0x10071230, 0x100751a0, 0x100b3960, 0x100b4480, 0x100c6de0, 0x100c6ff0, 0x100c7390, 0x100cada0, 0x100cbcc0, 0x100cbde0
 * callees: none
 */

void __thiscall sub_10036700(int this)
{
  if ( *(_DWORD *)this )
  {
    free(*(void **)this);
    *(_DWORD *)this = 0;
  }
  *(_DWORD *)(this + 4) = 0;
  *(_DWORD *)(this + 8) = 0;
}
