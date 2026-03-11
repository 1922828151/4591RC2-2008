/*
 * func-name: sub_10178740
 * func-address: 0x10178740
 * callers: 0x10092c60, 0x100f37e0
 * callees: 0x101a2516
 */

float *__thiscall sub_10178740(float *this, float *a2, float *a3, float *a4)
{
  float *result; // eax
  float v5; // [esp+4h] [ebp-4h]
  float v6; // [esp+4h] [ebp-4h]
  float v7; // [esp+Ch] [ebp+4h]
  float v8; // [esp+Ch] [ebp+4h]
  float v9; // [esp+Ch] [ebp+4h]
  float v10; // [esp+Ch] [ebp+4h]

  v5 = this[1] * this[1] + *this * *this + this[2] * this[2];
  v6 = sqrt(v5);
  result = a2;
  *a2 = v6;
  v7 = this[5] * this[5] + this[4] * this[4] + this[6] * this[6];
  v8 = sqrt(v7);
  *a3 = v8;
  v9 = this[9] * this[9] + this[8] * this[8] + this[10] * this[10];
  v10 = sqrt(v9);
  *a4 = v10;
  return result;
}
