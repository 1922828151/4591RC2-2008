/*
 * func-name: sub_102AF900
 * func-address: 0x102af900
 * callers: 0x10017de6
 * callees: 0x10003ca6
 */

int __cdecl sub_102AF900(int a1, int a2, int a3, int a4)
{
  int v4; // ecx
  int v5; // eax
  bool i; // zf

  v4 = a2;
  v5 = 2 * a2 + 2;
  for ( i = v5 == a3; v5 < a3; i = v5 == a3 )
  {
    if ( *(_DWORD *)(a1 + 4 * v5) > *(_DWORD *)(a1 + 4 * v5 - 4) )
      --v5;
    *(_DWORD *)(a1 + 4 * v4) = *(_DWORD *)(a1 + 4 * v5);
    v4 = v5;
    v5 = 2 * v5 + 2;
  }
  if ( i )
  {
    *(_DWORD *)(a1 + 4 * v4) = *(_DWORD *)(a1 + 4 * a3 - 4);
    v4 = a3 - 1;
  }
  return sub_10003CA6(a1, v4, a2, a4);
}
