/*
 * func-name: sub_10075310
 * func-address: 0x10075310
 * callers: 0x100143d0
 * callees: 0x102c9d50
 */

void __thiscall sub_10075310(int this)
{
  if ( *(_DWORD *)(this + 4) )
    operator delete(*(void **)(this + 4));
  *(_DWORD *)(this + 4) = 0;
  *(_DWORD *)(this + 8) = 0;
  *(_DWORD *)(this + 12) = 0;
}
