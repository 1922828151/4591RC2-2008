/*
 * func-name: sub_1006CA80
 * func-address: 0x1006ca80
 * callers: 0x1006d580
 * callees: none
 */

_DWORD *__cdecl sub_1006CA80(_DWORD *a1, _DWORD *a2, _DWORD *a3)
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
    v4[2] = v3[2];
    std::wstring::operator=(v4 + 3, v3 + 3);
    v3 += 10;
    v4 += 10;
  }
  while ( v3 != a2 );
  return v4;
}
