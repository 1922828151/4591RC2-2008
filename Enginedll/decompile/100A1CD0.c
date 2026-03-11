/*
 * func-name: sub_100A1CD0
 * func-address: 0x100a1cd0
 * callers: 0x10022210, 0x100223c0, 0x10022540, 0x1006e9a0, 0x100a1d70, 0x100a1e60, 0x100a2120, 0x100d14d0, 0x100f6900
 * callees: none
 */

_DWORD *__cdecl sub_100A1CD0(_DWORD *a1, _DWORD *a2, _DWORD *a3)
{
  _DWORD *v3; // ecx
  _DWORD *result; // eax

  v3 = a1;
  for ( result = a3; v3 != a2; result += 5 )
  {
    if ( result )
    {
      *result = *v3;
      result[1] = v3[1];
      result[2] = v3[2];
      result[3] = v3[3];
      result[4] = v3[4];
    }
    v3 += 5;
  }
  return result;
}
