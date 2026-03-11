/*
 * func-name: sub_1001E620
 * func-address: 0x1001e620
 * callers: 0x10021f60, 0x1003e3d0, 0x1003e4b0, 0x10061f30, 0x10062270, 0x100f6bc0
 * callees: none
 */

_DWORD *__cdecl sub_1001E620(_DWORD *a1, _DWORD *a2, _DWORD *a3)
{
  _DWORD *v3; // ecx
  _DWORD *result; // eax

  v3 = a1;
  for ( result = a3; v3 != a2; result += 4 )
  {
    if ( result )
    {
      *result = *v3;
      result[1] = v3[1];
      result[2] = v3[2];
      result[3] = v3[3];
    }
    v3 += 4;
  }
  return result;
}
