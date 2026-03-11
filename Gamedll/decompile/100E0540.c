/*
 * func-name: sub_100E0540
 * func-address: 0x100e0540
 * callers: 0x1000bc85
 * callees: none
 */

_DWORD *__cdecl sub_100E0540(_DWORD *a1, _DWORD *a2, _DWORD *a3)
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
    std::string::operator=(v4 + 9, v3 + 9);
    std::string::operator=(v4 + 16, v3 + 16);
    v3 += 23;
    v4 += 23;
  }
  while ( v3 != a2 );
  return v4;
}
