/*
 * func-name: sub_10031DB0
 * func-address: 0x10031db0
 * callers: 0x10031f50
 * callees: 0x10031a00
 */

void __cdecl sub_10031DB0(float *a1, float *a2, float *a3)
{
  int v3; // eax
  int v4; // eax
  int v5; // edi
  int v6; // ebx
  float *v7; // edx
  float *v9; // [esp+8h] [ebp+4h]

  v3 = ((char *)a3 - (char *)a1) >> 3;
  if ( v3 <= 40 )
  {
    sub_10031A00(a1, a2, a3);
  }
  else
  {
    v4 = (v3 + 1) / 8;
    v5 = 16 * v4;
    v6 = 8 * v4;
    v7 = &a1[4 * v4];
    v9 = &a1[2 * v4];
    sub_10031A00(a1, v9, v7);
    sub_10031A00(&a2[v6 / 0xFFFFFFFC], a2, &a2[v6 / 4u]);
    sub_10031A00(&a3[v5 / 0xFFFFFFFC], &a3[v6 / 0xFFFFFFFC], a3);
    sub_10031A00(v9, a2, &a3[v6 / 0xFFFFFFFC]);
  }
}
