/*
 * func-name: sub_101655D0
 * func-address: 0x101655d0
 * callers: 0x1000aed4
 * callees: 0x102c9d50
 */

void __thiscall sub_101655D0(int this)
{
  if ( *(_DWORD *)(this + 4) )
    operator delete(*(void **)(this + 4));
  *(_DWORD *)(this + 4) = 0;
  *(_DWORD *)(this + 8) = 0;
  *(_DWORD *)(this + 12) = 0;
}
