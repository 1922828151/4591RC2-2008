/*
 * func-name: sub_10034460
 * func-address: 0x10034460
 * callers: 0x100073a1
 * callees: none
 */

float *__thiscall sub_10034460(float *this, float *a2)
{
  float *result; // eax
  double v3; // st7
  float v4; // [esp+0h] [ebp-18h]
  float v5; // [esp+0h] [ebp-18h]
  float v6; // [esp+4h] [ebp-14h]
  float v7; // [esp+4h] [ebp-14h]
  float v8; // [esp+8h] [ebp-10h]
  float v9; // [esp+8h] [ebp-10h]
  float v10; // [esp+Ch] [ebp-Ch]
  float v11; // [esp+10h] [ebp-8h]
  float v12; // [esp+14h] [ebp-4h]

  result = a2;
  v4 = this[7] - this[4];
  v6 = this[8] - this[5];
  v8 = this[9] - this[6];
  v10 = v4 * 0.5;
  v11 = v6 * 0.5;
  v12 = 0.5 * v8;
  v5 = this[4] + v10;
  v7 = this[5] + v11;
  v3 = this[6] + v12;
  *a2 = v5;
  a2[1] = v7;
  v9 = v3;
  a2[2] = v9;
  return result;
}
