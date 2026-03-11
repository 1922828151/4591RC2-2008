/*
 * func-name: sub_1007CA10
 * func-address: 0x1007ca10
 * callers: 0x10003cba
 * callees: none
 */

int __thiscall sub_1007CA10(_DWORD *this, unsigned int a2)
{
  int v3; // eax

  v3 = this[1];
  if ( !v3 || a2 >= (this[2] - v3) / 20 )
    _invalid_parameter_noinfo();
  return this[1] + 20 * a2;
}
