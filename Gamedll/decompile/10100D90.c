/*
 * func-name: sub_10100D90
 * func-address: 0x10100d90
 * callers: 0x10003d23
 * callees: none
 */

int __thiscall sub_10100D90(_DWORD *this, unsigned int a2)
{
  int v3; // eax

  v3 = this[1];
  if ( !v3 || a2 >= (this[2] - v3) / 28 )
    _invalid_parameter_noinfo();
  return this[1] + 28 * a2;
}
