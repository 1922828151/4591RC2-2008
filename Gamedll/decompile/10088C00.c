/*
 * func-name: sub_10088C00
 * func-address: 0x10088c00
 * callers: 0x10001be5
 * callees: 0x102c9d50
 */

void __thiscall sub_10088C00(int this)
{
  if ( *(_DWORD *)(this + 4) )
    operator delete(*(void **)(this + 4));
  *(_DWORD *)(this + 4) = 0;
  *(_DWORD *)(this + 8) = 0;
  *(_DWORD *)(this + 12) = 0;
}
