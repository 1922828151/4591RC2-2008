/*
 * func-name: sub_10126790
 * func-address: 0x10126790
 * callers: 0x1000cd90
 * callees: none
 */

_DWORD *__cdecl sub_10126790(int a1, int a2, _DWORD *a3)
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
    v5 = *(_DWORD *)(v3 - 32);
    v3 -= 32;
    v4 -= 8;
    *v4 = v5;
    std::string::operator=(v4 + 1, v3 + 4);
  }
  while ( v3 != a1 );
  return v4;
}
