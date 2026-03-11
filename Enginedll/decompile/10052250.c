/*
 * func-name: sub_10052250
 * func-address: 0x10052250
 * callers: 0x10052490, 0x10077b70, 0x10078b90, 0x100c54a0
 * callees: 0x1006ca30
 */

_DWORD *__thiscall sub_10052250(_DWORD *this, _DWORD *a2, int a3, int a4, int a5, int a6)
{
  _DWORD *result; // eax

  if ( !a3 || a3 != a5 )
    invalid_parameter_noinfo();
  if ( a4 != a6 )
    this[2] = sub_1006CA30(a6, this[2], a4);
  result = a2;
  a2[1] = a4;
  *a2 = a3;
  return result;
}
