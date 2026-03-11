/*
 * func-name: sub_100F9310
 * func-address: 0x100f9310
 * callers: 0x100f96b0
 * callees: 0x100f9060
 */

bool __stdcall sub_100F9310(int *a1, int *a2, int a3)
{
  int v3; // esi
  int *v4; // ecx
  int *v5; // edx
  int v6; // edi
  int *v7; // eax
  int v9; // [esp+Ch] [ebp-10h] BYREF
  int v10; // [esp+10h] [ebp-Ch] BYREF
  int v11; // [esp+14h] [ebp-8h] BYREF
  int *v12; // [esp+18h] [ebp-4h] BYREF

  v3 = *a1;
  v4 = (int *)a1[1];
  v10 = a1[2];
  v5 = (int *)a2[1];
  v6 = *a2;
  v7 = (int *)a2[2];
  v11 = v3;
  v12 = v4;
  v9 = v6;
  a2 = v5;
  a1 = v7;
  return v4 == v5 && v3 == v6
      || v4 == (int *)v6 && (int *)v3 == v5
      || v4 == v5 && (int *)v3 == v7
      || v4 == v7 && ((int *)v3 == v5 || v3 == v6)
      || v4 == (int *)v6 && (int *)v3 == v7
      || sub_100F9060(&v11, &v10, &v9, (int *)&a2, (int *)&a1)
      || sub_100F9060(&v10, &v12, &v9, (int *)&a2, (int *)&a1);
}
