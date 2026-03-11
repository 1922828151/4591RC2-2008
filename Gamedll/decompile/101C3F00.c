/*
 * func-name: sub_101C3F00
 * func-address: 0x101c3f00
 * callers: 0x10003dbe
 * callees: 0x102c9d50
 */

void __thiscall sub_101C3F00(int this)
{
  if ( *(_DWORD *)(this + 4) )
    operator delete(*(void **)(this + 4));
  *(_DWORD *)(this + 4) = 0;
  *(_DWORD *)(this + 8) = 0;
  *(_DWORD *)(this + 12) = 0;
}
