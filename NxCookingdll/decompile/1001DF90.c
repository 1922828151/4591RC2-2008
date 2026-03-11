/*
 * func-name: sub_1001DF90
 * func-address: 0x1001df90
 * callers: none
 * callees: none
 */

float *__thiscall sub_1001DF90(_DWORD *this, int a2, float *a3)
{
  int v3; // ecx
  int v4; // edx
  int v5; // ecx
  _DWORD *v6; // eax
  float *v7; // esi
  double v8; // st7
  int v9; // edx
  float *v10; // eax
  double v11; // rt0
  double v12; // st5
  double v13; // st6
  double v14; // st4
  float *result; // eax
  float v16; // [esp+4h] [ebp-Ch]
  float v17; // [esp+8h] [ebp-8h]
  float v18; // [esp+Ch] [ebp-4h]

  v3 = this[18];
  v4 = *(_DWORD *)(v3 + 16);
  v5 = *(_DWORD *)(v3 + 20);
  v6 = (_DWORD *)(v4 + 12 * a2);
  v7 = (float *)(v5 + 12 * v6[1]);
  v8 = *v7 + *(float *)(v5 + 12 * *v6);
  v9 = v5 + 12 * *v6;
  v10 = (float *)(v5 + 12 * v6[2]);
  v11 = v7[2] + *(float *)(v9 + 8);
  v12 = v8 + *v10;
  v13 = v7[1] + *(float *)(v9 + 4) + v10[1];
  v14 = v10[2];
  result = a3;
  v16 = v12 * 0.33333334;
  *a3 = v16;
  v17 = v13 * 0.33333334;
  a3[1] = v17;
  v18 = (v11 + v14) * 0.33333334;
  a3[2] = v18;
  return result;
}
