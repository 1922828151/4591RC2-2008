/*
 * func-name: sub_100CEFA0
 * func-address: 0x100cefa0
 * callers: 0x100c33b0
 * callees: none
 */

_DWORD *__thiscall sub_100CEFA0(_DWORD *this, _DWORD *a2)
{
  unsigned int v3; // eax
  unsigned int v4; // esi
  _DWORD *result; // eax

  v3 = this[3];
  v4 = v3 + this[4];
  if ( v3 > v4 )
    invalid_parameter_noinfo();
  result = a2;
  *a2 = 0;
  a2[2] = this;
  a2[3] = v4;
  a2[1] = 0;
  return result;
}
