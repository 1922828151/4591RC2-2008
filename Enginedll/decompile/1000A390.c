/*
 * func-name: sub_1000A390
 * func-address: 0x1000a390
 * callers: 0x1006d030
 * callees: none
 */

_DWORD *__cdecl sub_1000A390(_DWORD *a1, _DWORD *a2, _DWORD *a3)
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
