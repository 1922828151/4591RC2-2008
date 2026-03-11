/*
 * func-name: sub_100E04A0
 * func-address: 0x100e04a0
 * callers: 0x100df380
 * callees: 0x100e02d0
 */

unsigned int __thiscall sub_100E04A0(_DWORD *this, unsigned int a2)
{
  unsigned int v3; // esi
  unsigned int v4; // esi

  v3 = this[1];
  if ( !v3 || (int)(this[2] - v3) / 28 <= a2 )
    sub_100E02D0();
  if ( v3 > this[2] )
    invalid_parameter_noinfo();
  v4 = v3 + 28 * a2;
  if ( v4 > this[2] || v4 < this[1] )
    invalid_parameter_noinfo();
  if ( v4 >= this[2] )
    invalid_parameter_noinfo();
  return v4;
}
