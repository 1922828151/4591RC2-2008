/*
 * func-name: sub_10057380
 * func-address: 0x10057380
 * callers: 0x1005d480, 0x10074c30, 0x100c33b0
 * callees: none
 */

_DWORD *__thiscall sub_10057380(_DWORD *this, _DWORD *a2)
{
  unsigned int v3; // edi
  unsigned int v4; // eax

  v3 = this[3];
  v4 = v3 + this[4];
  *a2 = 0;
  if ( v3 > v4 )
    invalid_parameter_noinfo();
  a2[2] = v3;
  a2[1] = this;
  return a2;
}
