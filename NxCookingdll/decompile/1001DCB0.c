/*
 * func-name: sub_1001DCB0
 * func-address: 0x1001dcb0
 * callers: none
 * callees: none
 */

float *__thiscall sub_1001DCB0(_DWORD *this, int a2, float *a3)
{
  float *v3; // eax
  double v4; // st7
  double v5; // st6
  double v6; // st5
  float *result; // eax
  float v8; // [esp+0h] [ebp-Ch]
  float v9; // [esp+4h] [ebp-8h]
  float v10; // [esp+8h] [ebp-4h]

  v3 = (float *)(this[18] + 24 * a2);
  v4 = *v3 + v3[3];
  v5 = v3[4] + v3[1];
  v6 = v3[5] + v3[2];
  result = a3;
  v8 = v4 * 0.5;
  *a3 = v8;
  v9 = v5 * 0.5;
  a3[1] = v9;
  v10 = 0.5 * v6;
  a3[2] = v10;
  return result;
}
