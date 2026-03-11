/*
 * func-name: sub_1014A6A0
 * func-address: 0x1014a6a0
 * callers: 0x100174e0
 * callees: 0x102c9d50
 */

void __thiscall sub_1014A6A0(int this)
{
  if ( *(_DWORD *)(this + 4) )
    operator delete(*(void **)(this + 4));
  *(_DWORD *)(this + 4) = 0;
  *(_DWORD *)(this + 8) = 0;
  *(_DWORD *)(this + 12) = 0;
}
