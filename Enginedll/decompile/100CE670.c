/*
 * func-name: sub_100CE670
 * func-address: 0x100ce670
 * callers: 0x100ceab0
 * callees: none
 */

_DWORD *__cdecl sub_100CE670(int a1, int a2, _DWORD *a3)
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
    v4[2] = *(_DWORD *)(v3 + 8);
    std::wstring::operator=(v4 + 3, v3 + 12);
  }
  while ( v3 != a1 );
  return v4;
}
