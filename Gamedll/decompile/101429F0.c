/*
 * func-name: sub_101429F0
 * func-address: 0x101429f0
 * callers: 0x10017f71
 * callees: 0x102c9d50
 */

void __thiscall sub_101429F0(int this)
{
  if ( *(_DWORD *)(this + 4) )
    operator delete(*(void **)(this + 4));
  *(_DWORD *)(this + 4) = 0;
  *(_DWORD *)(this + 8) = 0;
  *(_DWORD *)(this + 12) = 0;
}
