/*
 * func-name: sub_100A4C10
 * func-address: 0x100a4c10
 * callers: 0x1001936c
 * callees: 0x102c9d50
 */

void __thiscall sub_100A4C10(int this)
{
  if ( *(_DWORD *)(this + 4) )
    operator delete(*(void **)(this + 4));
  *(_DWORD *)(this + 4) = 0;
  *(_DWORD *)(this + 8) = 0;
  *(_DWORD *)(this + 12) = 0;
}
