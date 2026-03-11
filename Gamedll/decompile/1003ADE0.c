/*
 * func-name: sub_1003ADE0
 * func-address: 0x1003ade0
 * callers: 0x100032fb
 * callees: none
 */

int __thiscall sub_1003ADE0(_DWORD *this, unsigned int a2)
{
  int v3; // eax

  v3 = this[1];
  if ( !v3 || a2 >= (this[2] - v3) / 20 )
    _invalid_parameter_noinfo();
  return this[1] + 20 * a2;
}
