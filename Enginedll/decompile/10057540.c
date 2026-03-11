/*
 * func-name: sub_10057540
 * func-address: 0x10057540
 * callers: 0x1005b3f0, 0x1005d480, 0x10074c30
 * callees: none
 */

_DWORD *__thiscall sub_10057540(_DWORD *this, _DWORD *a2, int a3)
{
  int v3; // esi
  int v4; // edi
  unsigned int v5; // eax
  unsigned int v6; // edi
  _DWORD *result; // eax

  v3 = this[1];
  v4 = this[2];
  if ( !v3 )
    invalid_parameter_noinfo();
  v5 = *(_DWORD *)(v3 + 12);
  v6 = a3 + v4;
  if ( v6 > v5 + *(_DWORD *)(v3 + 16) || v6 < v5 )
    invalid_parameter_noinfo();
  result = a2;
  a2[2] = v6;
  a2[1] = v3;
  *a2 = 0;
  return result;
}
