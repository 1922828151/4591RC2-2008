/*
 * func-name: sub_10056BB0
 * func-address: 0x10056bb0
 * callers: 0x10006cdf
 * callees: 0x10013327
 */

void __thiscall sub_10056BB0(_DWORD *this)
{
  unsigned int v2; // edi
  unsigned int v3; // ebx

  v2 = this[2];
  if ( this[1] > v2 )
    _invalid_parameter_noinfo();
  v3 = this[1];
  if ( v3 > this[2] )
    _invalid_parameter_noinfo();
  if ( v3 != v2 )
    this[2] = sub_10013327(v2, this[2], v3);
}
