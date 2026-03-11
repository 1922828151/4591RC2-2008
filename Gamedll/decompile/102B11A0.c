/*
 * func-name: sub_102B11A0
 * func-address: 0x102b11a0
 * callers: 0x10011743
 * callees: 0x102c9d50
 */

void __thiscall sub_102B11A0(int this)
{
  if ( *(_DWORD *)(this + 4) )
    operator delete(*(void **)(this + 4));
  *(_DWORD *)(this + 4) = 0;
  *(_DWORD *)(this + 8) = 0;
  *(_DWORD *)(this + 12) = 0;
}
