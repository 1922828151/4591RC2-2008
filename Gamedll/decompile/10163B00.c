/*
 * func-name: sub_10163B00
 * func-address: 0x10163b00
 * callers: 0x1001803e
 * callees: 0x1001372d
 */

int __cdecl sub_10163B00(int a1, int a2, int a3, int a4, unsigned __int8 (__cdecl *a5)(_DWORD, _DWORD))
{
  int v5; // ebx
  int v6; // esi
  bool i; // zf

  v5 = a2;
  v6 = 2 * a2 + 2;
  for ( i = v6 == a3; v6 < a3; i = v6 == a3 )
  {
    if ( a5(*(_DWORD *)(a1 + 4 * v6), *(_DWORD *)(a1 + 4 * v6 - 4)) )
      --v6;
    *(_DWORD *)(a1 + 4 * v5) = *(_DWORD *)(a1 + 4 * v6);
    v5 = v6;
    v6 = 2 * v6 + 2;
  }
  if ( i )
  {
    *(_DWORD *)(a1 + 4 * v5) = *(_DWORD *)(a1 + 4 * a3 - 4);
    v5 = a3 - 1;
  }
  return sub_1001372D(a1, v5, a2, a4, (int)a5);
}
