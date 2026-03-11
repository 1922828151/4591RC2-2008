/*
 * func-name: sub_102BBD10
 * func-address: 0x102bbd10
 * callers: 0x10008df0
 * callees: none
 */

int __thiscall sub_102BBD10(_DWORD *this, unsigned int a2)
{
  int v3; // eax

  v3 = this[1];
  if ( !v3 || a2 >= (this[2] - v3) / 40 )
    _invalid_parameter_noinfo();
  return this[1] + 40 * a2;
}
