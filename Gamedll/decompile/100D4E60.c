/*
 * func-name: sub_100D4E60
 * func-address: 0x100d4e60
 * callers: 0x1001a591
 * callees: none
 */

int __thiscall sub_100D4E60(_DWORD *this, unsigned int a2)
{
  int v3; // eax

  v3 = this[1];
  if ( !v3 || a2 >= (this[2] - v3) / 12 )
    _invalid_parameter_noinfo();
  return this[1] + 12 * a2;
}
