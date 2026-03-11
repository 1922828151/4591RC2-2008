/*
 * func-name: sub_10258EA0
 * func-address: 0x10258ea0
 * callers: 0x100055d3
 * callees: none
 */

int __thiscall sub_10258EA0(_DWORD *this, unsigned int a2)
{
  int v3; // eax

  v3 = this[1];
  if ( !v3 || a2 >= (this[2] - v3) / 36 )
    _invalid_parameter_noinfo();
  return this[1] + 36 * a2;
}
