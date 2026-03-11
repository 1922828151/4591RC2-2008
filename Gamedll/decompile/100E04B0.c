/*
 * func-name: sub_100E04B0
 * func-address: 0x100e04b0
 * callers: 0x1000e7e6
 * callees: none
 */

_DWORD *__cdecl sub_100E04B0(int a1, int a2, _DWORD *a3)
{
  int v3; // esi
  _DWORD *v4; // edi
  int v5; // eax

  v3 = a2;
  if ( a1 == a2 )
    return a3;
  v4 = a3;
  do
  {
    v5 = *(_DWORD *)(v3 - 92);
    v3 -= 92;
    v4 -= 23;
    *v4 = v5;
    v4[1] = *(_DWORD *)(v3 + 4);
    std::string::operator=(v4 + 2, v3 + 8);
    std::string::operator=(v4 + 9, v3 + 36);
    std::string::operator=(v4 + 16, v3 + 64);
  }
  while ( v3 != a1 );
  return v4;
}
