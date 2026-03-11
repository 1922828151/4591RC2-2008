/*
 * func-name: sub_1001FC00
 * func-address: 0x1001fc00
 * callers: 0x1001fc00, 0x10020740
 * callees: 0x100149b0, 0x1001fc00
 */

void __cdecl sub_1001FC00(_DWORD *a1, int a2, int a3, int a4)
{
  int i; // edi
  _DWORD *v5; // edi
  int v6; // eax
  int v7; // edi

  for ( i = a3; !*(_BYTE *)(i + a4); i = v7 & 0x1FFFFFFF )
  {
    *(_BYTE *)(i + a4) = 1;
    if ( a1[1] == *a1 )
      sub_100149B0(a1, 1);
    *(_DWORD *)(a1[2] + 4 * a1[1]++) = i;
    v5 = (_DWORD *)(a2 + 12 * i);
    if ( (*v5 & 0x20000000) == 0 )
      sub_1001FC00(a1, a2, *v5 & 0x1FFFFFFF, a4);
    v6 = v5[1];
    if ( (v6 & 0x20000000) == 0 )
      sub_1001FC00(a1, a2, v6 & 0x1FFFFFFF, a4);
    v7 = v5[2];
    if ( (v7 & 0x20000000) != 0 )
      break;
  }
}
