/*
 * func-name: sub_10051450
 * func-address: 0x10051450
 * callers: 0x1000d51c
 * callees: 0x102c9d50
 */

void __thiscall sub_10051450(int this)
{
  if ( *(_DWORD *)(this + 4) )
    operator delete(*(void **)(this + 4));
  *(_DWORD *)(this + 4) = 0;
  *(_DWORD *)(this + 8) = 0;
  *(_DWORD *)(this + 12) = 0;
}
