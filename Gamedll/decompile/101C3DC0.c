/*
 * func-name: sub_101C3DC0
 * func-address: 0x101c3dc0
 * callers: 0x100079d2
 * callees: none
 */

_DWORD *__cdecl sub_101C3DC0(_DWORD *a1, _DWORD *a2, _DWORD *a3)
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
