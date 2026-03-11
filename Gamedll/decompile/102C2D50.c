/*
 * func-name: sub_102C2D50
 * func-address: 0x102c2d50
 * callers: 0x102c33f0
 * callees: none
 */

int __thiscall sub_102C2D50(_DWORD *this, unsigned int a2)
{
  int v3; // ecx

  v3 = this[1];
  if ( !v3 || a2 >= (this[2] - v3) >> 6 )
    _invalid_parameter_noinfo();
  return this[1] + (a2 << 6);
}
