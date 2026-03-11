/*
 * func-name: sub_10288300
 * func-address: 0x10288300
 * callers: 0x100031cf
 * callees: 0x10009002
 */

int __cdecl sub_10288300(int a1, int a2, int a3, int a4)
{
  int v4; // ecx
  int v5; // eax
  bool i; // zf

  v4 = a2;
  v5 = 2 * a2 + 2;
  for ( i = v5 == a3; v5 < a3; i = v5 == a3 )
  {
    if ( *(_DWORD *)(a1 + 4 * v5) < *(_DWORD *)(a1 + 4 * v5 - 4) )
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
  return sub_10009002(a1, v4, a2, a4);
}
