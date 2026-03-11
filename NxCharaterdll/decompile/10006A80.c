/*
 * func-name: sub_10006A80
 * func-address: 0x10006a80
 * callers: none
 * callees: 0x100064a0, 0x10009920, 0x10009940
 */

int __thiscall sub_10006A80(int this, int a2, int a3, float a4, int *a5, float a6, int a7)
{
  int v8; // eax
  int v9; // ecx
  int v10; // edx
  double v11; // st7
  int v12; // eax
  int v13; // ecx
  int v14; // edx
  int v15; // eax
  int v17[14]; // [esp+1Ch] [ebp-44h] BYREF
  int v18; // [esp+5Ch] [ebp-4h]

  sub_10009920(v17);
  v8 = *(_DWORD *)(this + 280);
  v17[10] = *(int *)(this + 376);
  v9 = *(_DWORD *)(this + 284);
  v10 = *(_DWORD *)(this + 288);
  v17[11] = *(int *)(this + 380);
  v11 = *(float *)(this + 384);
  v17[2] = v8;
  v12 = *(_DWORD *)(this + 292);
  *(float *)&v17[12] = v11;
  v17[3] = v9;
  v13 = *(_DWORD *)(this + 296);
  v17[4] = v10;
  v14 = *(_DWORD *)(this + 300);
  v17[5] = v12;
  v15 = *(_DWORD *)(this + 24);
  v17[6] = v13;
  v17[7] = v14;
  v17[8] = *(int *)(this + 4 * v15 + 376);
  v18 = 0;
  sub_100064A0((float *)(this + 8), (int)v17, a2, a3, a4, a5, a6, a7, 0);
  v18 = -1;
  return sub_10009940(v17);
}
