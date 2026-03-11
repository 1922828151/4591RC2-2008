/*
 * func-name: sub_1017BB30
 * func-address: 0x1017bb30
 * callers: none
 * callees: 0x101781d0, 0x101a2516
 */

double __thiscall sub_1017BB30(float *this, float *a2, float *a3)
{
  float v4; // [esp+0h] [ebp-24h] BYREF
  float v5; // [esp+4h] [ebp-20h]
  float v6; // [esp+8h] [ebp-1Ch]
  float v7; // [esp+Ch] [ebp-18h] BYREF
  float v8; // [esp+10h] [ebp-14h]
  float v9; // [esp+14h] [ebp-10h]
  float v10[3]; // [esp+18h] [ebp-Ch] BYREF
  float v11; // [esp+28h] [ebp+4h]

  v4 = *this - *a2;
  v5 = this[1] - a2[1];
  v6 = this[2] - a2[2];
  v7 = *a3 - *a2;
  v8 = a3[1] - a2[1];
  v9 = a3[2] - a2[2];
  sub_101781D0(&v4, v10, &v7);
  v7 = v4 - v10[0];
  v8 = v5 - v10[1];
  v9 = v6 - v10[2];
  v11 = v8 * v8 + v7 * v7 + v9 * v9;
  return (float)sqrt(v11);
}
