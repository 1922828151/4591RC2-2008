/*
 * func-name: sub_1006F000
 * func-address: 0x1006f000
 * callers: 0x10018b15
 * callees: none
 */

int __thiscall sub_1006F000(_DWORD *this, unsigned int a2)
{
  int v3; // ecx

  v3 = this[2];
  if ( v3 && a2 < (this[3] - v3) >> 2 )
    return *(_DWORD *)(v3 + 4 * a2);
  _invalid_parameter_noinfo();
  return *(_DWORD *)(this[2] + 4 * a2);
}
