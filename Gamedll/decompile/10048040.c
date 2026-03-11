/*
 * func-name: sub_10048040
 * func-address: 0x10048040
 * callers: 0x10014759
 * callees: none
 */

_DWORD *__cdecl sub_10048040(_DWORD *a1, _DWORD *a2, _DWORD *a3)
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
    v4[1] = v3[1];
    std::string::operator=(v4 + 2, v3 + 2);
    v4[9] = v3[9];
    v3 += 10;
    v4 += 10;
  }
  while ( v3 != a2 );
  return v4;
}
