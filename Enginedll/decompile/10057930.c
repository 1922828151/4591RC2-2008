/*
 * func-name: sub_10057930
 * func-address: 0x10057930
 * callers: 0x10057b10
 * callees: 0x100572e0
 */

int __cdecl sub_10057930(int *a1, int *a2, int *a3, unsigned __int8 (__cdecl *a4)(int, int))
{
  int v5; // eax
  int v6; // eax
  int v7; // edi
  int *v9; // [esp+0h] [ebp-4h]
  int v10; // [esp+10h] [ebp+Ch]

  v5 = a3 - a1;
  if ( v5 <= 40 )
    return sub_100572E0(a1, a2, a3, a4);
  v6 = (v5 + 1) / 8;
  v10 = 8 * v6;
  v7 = 4 * v6;
  v9 = &a1[v6];
  sub_100572E0(a1, v9, &a1[2 * v6], a4);
  sub_100572E0(&a2[v7 / 0xFFFFFFFC], a2, &a2[v7 / 4u], a4);
  sub_100572E0(&a3[v10 / 0xFFFFFFFC], &a3[v7 / 0xFFFFFFFC], a3, a4);
  return sub_100572E0(v9, a2, &a3[v7 / 0xFFFFFFFC], a4);
}
