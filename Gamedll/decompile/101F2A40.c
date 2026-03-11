/*
 * func-name: sub_101F2A40
 * func-address: 0x101f2a40
 * callers: 0x1000879c
 * callees: none
 */

_DWORD *__cdecl sub_101F2A40(int a1, int a2, _DWORD *a3)
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
    v5 = *(_DWORD *)(v3 - 60);
    v3 -= 60;
    v4 -= 15;
    *v4 = v5;
    std::string::operator=(v4 + 1, v3 + 4);
    std::string::operator=(v4 + 8, v3 + 32);
  }
  while ( v3 != a1 );
  return v4;
}
