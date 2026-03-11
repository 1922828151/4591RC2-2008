/*
 * func-name: sub_100FEC50
 * func-address: 0x100fec50
 * callers: 0x100fb650
 * callees: none
 */

unsigned int __thiscall sub_100FEC50(_DWORD *this)
{
  unsigned int v2; // edi

  v2 = this[2];
  if ( this[1] > v2 )
    invalid_parameter_noinfo();
  if ( v2 - 16 > this[2] || v2 - 16 < this[1] )
    invalid_parameter_noinfo();
  if ( v2 - 16 >= this[2] )
    invalid_parameter_noinfo();
  return v2 - 16;
}
