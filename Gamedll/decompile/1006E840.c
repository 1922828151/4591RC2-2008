/*
 * func-name: sub_1006E840
 * func-address: 0x1006e840
 * callers: 0x1000821f
 * callees: none
 */

_DWORD *__cdecl sub_1006E840(_DWORD *a1, _DWORD *a2, _DWORD *a3)
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
    std::wstring::operator=(v4 + 1, v3 + 1);
    v4[8] = v3[8];
    v3 += 9;
    v4 += 9;
  }
  while ( v3 != a2 );
  return v4;
}
