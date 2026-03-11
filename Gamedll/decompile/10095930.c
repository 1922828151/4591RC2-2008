/*
 * func-name: sub_10095930
 * func-address: 0x10095930
 * callers: 0x1000a1a5
 * callees: none
 */

_DWORD *__cdecl sub_10095930(_DWORD *a1, _DWORD *a2, _DWORD *a3)
{
  _DWORD *result; // eax

  for ( result = a1; result != a2; result += 2 )
  {
    *result = *a3;
    result[1] = a3[1];
  }
  return result;
}
