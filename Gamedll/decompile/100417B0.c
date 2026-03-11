/*
 * func-name: sub_100417B0
 * func-address: 0x100417b0
 * callers: 0x10007a22
 * callees: none
 */

_DWORD *__cdecl sub_100417B0(_DWORD *a1, _DWORD *a2, _DWORD *a3)
{
  _DWORD *v3; // ecx
  _DWORD *result; // eax

  v3 = a1;
  for ( result = a3; v3 != a2; result += 5 )
  {
    *result = *v3;
    result[1] = v3[1];
    result[2] = v3[2];
    result[3] = v3[3];
    result[4] = v3[4];
    v3 += 5;
  }
  return result;
}
