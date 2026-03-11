/*
 * func-name: sub_10035E00
 * func-address: 0x10035e00
 * callers: 0x10033b90, 0x100a9980
 * callees: none
 */

int __thiscall sub_10035E00(_DWORD *this, int a2, _DWORD *a3)
{
  if ( a2 < 0 || a2 >= this[1] )
    return -2147024809;
  *(_DWORD *)(*this + 4 * a2) = *a3;
  return 0;
}
