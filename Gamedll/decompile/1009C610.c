/*
 * func-name: sub_1009C610
 * func-address: 0x1009c610
 * callers: 0x10018ebc
 * callees: none
 */

int __thiscall sub_1009C610(_DWORD *this, unsigned int a2)
{
  int v3; // eax

  v3 = this[1];
  if ( !v3 || a2 >= (this[2] - v3) / 184 )
    _invalid_parameter_noinfo();
  return this[1] + 184 * a2;
}
