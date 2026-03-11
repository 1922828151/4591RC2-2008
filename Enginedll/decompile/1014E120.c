/*
 * func-name: sub_1014E120
 * func-address: 0x1014e120
 * callers: 0x1014e280
 * callees: none
 */

_DWORD *__cdecl sub_1014E120(_DWORD *a1, _DWORD *a2, _DWORD *a3)
{
  _DWORD *v3; // esi
  _DWORD *v4; // edi

  v3 = a1;
  if ( a1 == a2 )
    return a3;
  v4 = a3;
  do
  {
    std::string::operator=(v4, v3);
    v4[7] = v3[7];
    v4[8] = v3[8];
    v4[9] = v3[9];
    std::string::operator=(v4 + 10, v3 + 10);
    v3 += 17;
    v4 += 17;
  }
  while ( v3 != a2 );
  return v4;
}
