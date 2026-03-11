/*
 * func-name: sub_10164310
 * func-address: 0x10164310
 * callers: 0x10012143
 * callees: 0x100163e2
 */

int __cdecl sub_10164310(int a1, int a2, int a3, int a4)
{
  int v5; // eax
  int v6; // eax
  int v7; // edi
  int v9; // [esp+0h] [ebp-4h]
  int v10; // [esp+10h] [ebp+Ch]

  v5 = (a3 - a1) >> 2;
  if ( v5 <= 40 )
    return sub_100163E2(a1, a2, a3, a4);
  v6 = (v5 + 1) / 8;
  v10 = 8 * v6;
  v7 = 4 * v6;
  v9 = 4 * v6 + a1;
  sub_100163E2(a1, v9, a1 + 8 * v6, a4);
  sub_100163E2(a2 - v7, a2, v7 + a2, a4);
  sub_100163E2(a3 - v10, a3 - v7, a3, a4);
  return sub_100163E2(v9, a2, a3 - v7, a4);
}
