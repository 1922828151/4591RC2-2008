/*
 * func-name: sub_101849D0
 * func-address: 0x101849d0
 * callers: 0x10013a11
 * callees: none
 */

int __thiscall sub_101849D0(_DWORD *this, unsigned int a2)
{
  int v3; // eax

  v3 = this[1];
  if ( !v3 || a2 >= (this[2] - v3) / 80 )
    _invalid_parameter_noinfo();
  return this[1] + 80 * a2;
}
