/*
 * func-name: sub_102B10D0
 * func-address: 0x102b10d0
 * callers: 0x10006da2
 * callees: 0x102c9d50
 */

void __thiscall sub_102B10D0(int this)
{
  if ( *(_DWORD *)(this + 4) )
    operator delete(*(void **)(this + 4));
  *(_DWORD *)(this + 4) = 0;
  *(_DWORD *)(this + 8) = 0;
  *(_DWORD *)(this + 12) = 0;
}
