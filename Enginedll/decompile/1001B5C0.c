/*
 * func-name: sub_1001B5C0
 * func-address: 0x1001b5c0
 * callers: 0x1001c9d0
 * callees: none
 */

_DWORD *__cdecl sub_1001B5C0(int a1, int a2, _DWORD *a3)
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
    v5 = *(_DWORD *)(v3 - 40);
    v3 -= 40;
    v4 -= 10;
    *v4 = v5;
    v4[1] = *(_DWORD *)(v3 + 4);
    std::string::operator=(v4 + 2, v3 + 8);
    v4[9] = *(_DWORD *)(v3 + 36);
  }
  while ( v3 != a1 );
  return v4;
}
