/*
 * func-name: sub_10017360
 * func-address: 0x10017360
 * callers: 0x100175a0, 0x100175f0, 0x10017750, 0x100177a0, 0x10017e30, 0x10018590
 * callees: 0x10017170, 0x1003641b
 */

void __thiscall sub_10017360(int this)
{
  sub_10017170((_DWORD *)this);
  if ( *(_DWORD *)(this + 8) )
  {
    j_j__free(*(void **)(this + 8));
    *(_DWORD *)(this + 8) = 0;
  }
  *(_DWORD *)(this + 12) = 0;
}
