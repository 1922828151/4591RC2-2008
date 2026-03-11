/*
 * func-name: sub_10031A80
 * func-address: 0x10031a80
 * callers: 0x10031e40, 0x10032530
 * callees: 0x100319a0
 */

int __cdecl sub_10031A80(int a1, int a2, int a3, int a4, float a5)
{
  int v5; // esi
  int v6; // ecx
  bool i; // zf

  v5 = a2;
  v6 = 2 * a2 + 2;
  for ( i = v6 == a3; v6 < a3; i = v6 == a3 )
  {
    if ( *(float *)(a1 + 8 * v6 - 4) > (double)*(float *)(a1 + 8 * v6 + 4) )
      --v6;
    *(_DWORD *)(a1 + 8 * v5) = *(_DWORD *)(a1 + 8 * v6);
    *(_DWORD *)(a1 + 8 * v5 + 4) = *(_DWORD *)(a1 + 8 * v6 + 4);
    v5 = v6;
    v6 = 2 * v6 + 2;
  }
  if ( i )
  {
    *(_DWORD *)(a1 + 8 * v5) = *(_DWORD *)(a1 + 8 * a3 - 8);
    *(_DWORD *)(a1 + 8 * v5 + 4) = *(_DWORD *)(a1 + 8 * a3 - 4);
    v5 = a3 - 1;
  }
  return sub_100319A0(a1, v5, a2, a4, a5);
}
