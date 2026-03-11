/*
 * func-name: sub_1001ECA0
 * func-address: 0x1001eca0
 * callers: 0x1002f5f0, 0x1002f7d0, 0x1002f9b0, 0x1002fbc0, 0x10031b20, 0x10032060, 0x100323b0, 0x10032db0
 * callees: none
 */

_DWORD *__cdecl sub_1001ECA0(int a1, _DWORD *a2, int a3, _DWORD *a4, _DWORD *a5)
{
  _DWORD *result; // eax

  for ( result = a2; result != a4; result += 2 )
  {
    *result = *a5;
    result[1] = a5[1];
  }
  return result;
}
