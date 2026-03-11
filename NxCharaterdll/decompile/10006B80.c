/*
 * func-name: sub_10006B80
 * func-address: 0x10006b80
 * callers: none
 * callees: 0x100064a0, 0x10009b20, 0x10009b40
 */

int __thiscall sub_10006B80(int this, int a2, int a3, float a4, int *a5, float a6, int a7)
{
  int v8; // eax
  char v9; // zf
  int v10; // ecx
  int v11; // edx
  double v12; // st7
  double v13; // st7
  int v15[12]; // [esp+1Ch] [ebp-3Ch] BYREF
  int v16; // [esp+54h] [ebp-4h]

  sub_10009B20(v15);
  v8 = *(_DWORD *)(this + 280);
  v15[10] = *(int *)(this + 376);
  v9 = *(_DWORD *)(this + 384) == 1;
  v10 = *(_DWORD *)(this + 284);
  v15[11] = *(int *)(this + 380);
  v11 = *(_DWORD *)(this + 288);
  v12 = *(float *)(this + 380) * 0.5;
  v15[2] = v8;
  v15[5] = *(_DWORD *)(this + 292);
  v13 = v12 + *(float *)(this + 376);
  v15[3] = v10;
  v15[6] = *(_DWORD *)(this + 296);
  *(float *)&v15[8] = v13;
  v15[4] = v11;
  v15[7] = *(_DWORD *)(this + 300);
  v16 = 0;
  sub_100064A0((float *)(this + 8), (int)v15, a2, a3, a4, a5, a6, a7, v9);
  v16 = -1;
  return sub_10009B40(v15);
}
