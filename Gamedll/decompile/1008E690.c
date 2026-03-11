/*
 * func-name: sub_1008E690
 * func-address: 0x1008e690
 * callers: 0x1000d3d2
 * callees: none
 */

int __thiscall sub_1008E690(_DWORD *this, unsigned int a2)
{
  int v3; // ecx

  v3 = this[1];
  if ( !v3 || a2 >= (this[2] - v3) >> 2 )
    _invalid_parameter_noinfo();
  return this[1] + 4 * a2;
}
