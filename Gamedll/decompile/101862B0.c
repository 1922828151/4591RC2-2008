/*
 * func-name: sub_101862B0
 * func-address: 0x101862b0
 * callers: 0x10010d11
 * callees: none
 */

int __thiscall sub_101862B0(_DWORD *this, unsigned int a2)
{
  int v3; // ecx

  v3 = this[1];
  if ( !v3 || a2 >= (this[2] - v3) >> 2 )
    _invalid_parameter_noinfo();
  return this[1] + 4 * a2;
}
