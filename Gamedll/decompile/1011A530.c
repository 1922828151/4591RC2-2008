/*
 * func-name: sub_1011A530
 * func-address: 0x1011a530
 * callers: 0x1000ebdd
 * callees: 0x102c9d50
 */

void __thiscall sub_1011A530(int this)
{
  if ( *(_DWORD *)(this + 4) )
    operator delete(*(void **)(this + 4));
  *(_DWORD *)(this + 4) = 0;
  *(_DWORD *)(this + 8) = 0;
  *(_DWORD *)(this + 12) = 0;
}
