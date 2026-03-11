/*
 * func-name: sub_10088EA0
 * func-address: 0x10088ea0
 * callers: 0x1000aa79
 * callees: 0x1001397b
 */

void __thiscall sub_10088EA0(_DWORD *this)
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
    this[2] = sub_1001397B(v2, this[2], v3);
}
