/*
 * func-name: sub_100C6C00
 * func-address: 0x100c6c00
 * callers: 0x10013b24
 * callees: none
 */

int __thiscall sub_100C6C00(_DWORD *this, unsigned int a2)
{
  int v3; // eax

  v3 = this[1];
  if ( !v3 || a2 >= (this[2] - v3) / 56 )
    _invalid_parameter_noinfo();
  return this[1] + 56 * a2;
}
