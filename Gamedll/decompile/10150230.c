/*
 * func-name: sub_10150230
 * func-address: 0x10150230
 * callers: 0x10007414
 * callees: 0x102c9d50
 */

void __thiscall sub_10150230(int this)
{
  if ( *(_DWORD *)(this + 4) )
    operator delete(*(void **)(this + 4));
  *(_DWORD *)(this + 4) = 0;
  *(_DWORD *)(this + 8) = 0;
  *(_DWORD *)(this + 12) = 0;
}
