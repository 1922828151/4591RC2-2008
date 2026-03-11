/*
 * func-name: sub_1000CB30
 * func-address: 0x1000cb30
 * callers: 0x100136b0
 * callees: none
 */

_DWORD *__thiscall sub_1000CB30(_DWORD *this, _DWORD *a2)
{
  unsigned int v3; // ebx

  v3 = this[2];
  if ( v3 > this[3] )
    invalid_parameter_noinfo();
  *a2 = 0;
  a2[1] = v3;
  a2[2] = 0;
  if ( !this )
    invalid_parameter_noinfo();
  *a2 = this;
  return a2;
}
