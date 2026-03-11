/*
 * func-name: sub_100752D0
 * func-address: 0x100752d0
 * callers: 0x10010cb2
 * callees: 0x102c9d50
 */

void __thiscall sub_100752D0(int this)
{
  if ( *(_DWORD *)(this + 4) )
    operator delete(*(void **)(this + 4));
  *(_DWORD *)(this + 4) = 0;
  *(_DWORD *)(this + 8) = 0;
  *(_DWORD *)(this + 12) = 0;
}
