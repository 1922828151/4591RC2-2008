/*
 * func-name: sub_102C4EB0
 * func-address: 0x102c4eb0
 * callers: none
 * callees: none
 */

_DWORD *__thiscall sub_102C4EB0(int *this, _DWORD *a2, int a3)
{
  int v3; // esi
  int v4; // edi
  unsigned int v5; // edi
  _DWORD *result; // eax

  v3 = *this;
  v4 = this[1];
  if ( !*this )
    _invalid_parameter_noinfo();
  v5 = v4 + 4 * a3;
  if ( v5 > *(_DWORD *)(v3 + 8) || v5 < *(_DWORD *)(v3 + 4) )
    _invalid_parameter_noinfo();
  result = a2;
  a2[1] = v5;
  *a2 = v3;
  return result;
}
