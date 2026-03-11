/*
 * func-name: sub_10043C20
 * func-address: 0x10043c20
 * callers: 0x10012cf1
 * callees: none
 */

int __thiscall sub_10043C20(_DWORD *this, unsigned int a2)
{
  int v3; // ecx

  v3 = this[1];
  if ( !v3 || a2 >= (this[2] - v3) >> 2 )
    _invalid_parameter_noinfo();
  return this[1] + 4 * a2;
}
