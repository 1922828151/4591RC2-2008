/*
 * func-name: sub_10053A20
 * func-address: 0x10053a20
 * callers: 0x10002f0e
 * callees: 0x102c9d50
 */

void __thiscall sub_10053A20(int this)
{
  if ( *(_DWORD *)(this + 4) )
    operator delete(*(void **)(this + 4));
  *(_DWORD *)(this + 4) = 0;
  *(_DWORD *)(this + 8) = 0;
  *(_DWORD *)(this + 12) = 0;
}
