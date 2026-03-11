/*
 * func-name: sub_1009D970
 * func-address: 0x1009d970
 * callers: 0x100129d1
 * callees: 0x1000b9fb
 */

void __thiscall sub_1009D970(_DWORD *this)
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
    this[2] = sub_1000B9FB(v2, this[2], v3);
}
