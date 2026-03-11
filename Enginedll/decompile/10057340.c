/*
 * func-name: sub_10057340
 * func-address: 0x10057340
 * callers: 0x10055990, 0x100b49b0, 0x100c5fd0
 * callees: none
 */

_DWORD *__thiscall sub_10057340(int *this, _DWORD *a2, int a3)
{
  int v3; // esi
  int v4; // edi
  unsigned int v5; // edi
  _DWORD *result; // eax

  v3 = *this;
  v4 = this[1];
  if ( !*this )
    invalid_parameter_noinfo();
  v5 = v4 + 4 * a3;
  if ( v5 > *(_DWORD *)(v3 + 8) || v5 < *(_DWORD *)(v3 + 4) )
    invalid_parameter_noinfo();
  result = a2;
  a2[1] = v5;
  *a2 = v3;
  return result;
}
