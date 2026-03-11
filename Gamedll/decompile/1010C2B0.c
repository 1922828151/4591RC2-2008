/*
 * func-name: sub_1010C2B0
 * func-address: 0x1010c2b0
 * callers: 0x10011b21
 * callees: 0x102c9d50
 */

void __thiscall sub_1010C2B0(int this)
{
  if ( *(_DWORD *)(this + 4) )
    operator delete(*(void **)(this + 4));
  *(_DWORD *)(this + 4) = 0;
  *(_DWORD *)(this + 8) = 0;
  *(_DWORD *)(this + 12) = 0;
}
