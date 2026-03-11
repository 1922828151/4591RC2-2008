/*
 * func-name: sub_1006C940
 * func-address: 0x1006c940
 * callers: 0x1005d480, 0x10074c30
 * callees: none
 */

_DWORD *__thiscall sub_1006C940(_DWORD *this, _DWORD *a2)
{
  unsigned int v3; // eax
  unsigned int v4; // esi

  v3 = this[3];
  v4 = v3 + this[4];
  *a2 = 0;
  if ( v3 > v4 )
    invalid_parameter_noinfo();
  a2[1] = this;
  a2[2] = v4;
  return a2;
}
