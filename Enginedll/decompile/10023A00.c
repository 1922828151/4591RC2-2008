/*
 * func-name: sub_10023A00
 * func-address: 0x10023a00
 * callers: 0x10025b10
 * callees: 0x10078560
 */

void __thiscall sub_10023A00(_DWORD *this)
{
  unsigned int v2; // edi
  unsigned int v3; // ebx

  v2 = this[2];
  if ( this[1] > v2 )
    invalid_parameter_noinfo();
  v3 = this[1];
  if ( v3 > this[2] )
    invalid_parameter_noinfo();
  if ( v3 != v2 )
    this[2] = sub_10078560(v2, this[2], v3);
}
