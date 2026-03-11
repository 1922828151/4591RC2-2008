/*
 * func-name: sub_1014E180
 * func-address: 0x1014e180
 * callers: 0x1014e330
 * callees: none
 */

_DWORD *__cdecl sub_1014E180(_DWORD *a1, _DWORD *a2, _DWORD *a3)
{
  _DWORD *v3; // esi
  _DWORD *v4; // edi

  v3 = a2;
  if ( a1 == a2 )
    return a3;
  v4 = a3;
  do
  {
    v3 -= 17;
    v4 -= 17;
    std::string::operator=(v4, v3);
    v4[7] = v3[7];
    v4[8] = v3[8];
    v4[9] = v3[9];
    std::string::operator=(v4 + 10, v3 + 10);
  }
  while ( v3 != a1 );
  return v4;
}
