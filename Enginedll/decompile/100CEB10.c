/*
 * func-name: sub_100CEB10
 * func-address: 0x100ceb10
 * callers: 0x100cef00, 0x100d04f0
 * callees: 0x100ce6c0
 */

int __cdecl sub_100CEB10(int a1, int a2, int a3, int a4, int (__cdecl *a5)(_DWORD, int))
{
  int v5; // ebx
  int v6; // esi
  bool i; // zf

  v5 = a2;
  v6 = 2 * a2 + 2;
  for ( i = v6 == a3; v6 < a3; i = v6 == a3 )
  {
    if ( (unsigned __int8)a5(*(_DWORD *)(a1 + 4 * v6), *(_DWORD *)(a1 + 4 * v6 - 4)) )
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
  return sub_100CE6C0(a1, v5, a2, a4, a5);
}
