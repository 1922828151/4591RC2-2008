/*
 * func-name: sub_1000A3D0
 * func-address: 0x1000a3d0
 * callers: 0x1001ebd0
 * callees: none
 */

_DWORD *__cdecl sub_1000A3D0(_DWORD *a1, _DWORD *a2, _DWORD *a3)
{
  _DWORD *v3; // esi
  _DWORD *v4; // edi

  v3 = a1;
  if ( a1 == a2 )
    return a3;
  v4 = a3;
  do
  {
    *v4 = *v3;
    std::string::operator=(v4 + 1, v3 + 1);
    v3 += 8;
    v4 += 8;
  }
  while ( v3 != a2 );
  return v4;
}
