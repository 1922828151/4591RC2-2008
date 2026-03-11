/*
 * func-name: sub_10264C90
 * func-address: 0x10264c90
 * callers: 0x10018c3c
 * callees: 0x102c9d50
 */

void __thiscall sub_10264C90(int this)
{
  if ( *(_DWORD *)(this + 4) )
    operator delete(*(void **)(this + 4));
  *(_DWORD *)(this + 4) = 0;
  *(_DWORD *)(this + 8) = 0;
  *(_DWORD *)(this + 12) = 0;
}
