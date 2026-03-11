/*
 * func-name: sub_10053A90
 * func-address: 0x10053a90
 * callers: 0x1000da53
 * callees: 0x102c9d50
 */

void __thiscall sub_10053A90(int this)
{
  if ( *(_DWORD *)(this + 4) )
    operator delete(*(void **)(this + 4));
  *(_DWORD *)(this + 4) = 0;
  *(_DWORD *)(this + 8) = 0;
  *(_DWORD *)(this + 12) = 0;
}
