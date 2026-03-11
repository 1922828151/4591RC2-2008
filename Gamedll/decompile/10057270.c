/*
 * func-name: sub_10057270
 * func-address: 0x10057270
 * callers: 0x1000d170
 * callees: 0x102c9d50
 */

void __thiscall sub_10057270(int this)
{
  if ( *(_DWORD *)(this + 4) )
    operator delete(*(void **)(this + 4));
  *(_DWORD *)(this + 4) = 0;
  *(_DWORD *)(this + 8) = 0;
  *(_DWORD *)(this + 12) = 0;
}
