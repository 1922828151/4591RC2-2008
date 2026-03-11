/*
 * func-name: sub_10178B10
 * func-address: 0x10178b10
 * callers: 0x10178c30, 0x10178da0, 0x101796b0, 0x10179840
 * callees: 0x101a2516
 */

float *__thiscall sub_10178B10(float *this)
{
  float *result; // eax
  float v2; // [esp+4h] [ebp-4h]
  float v3; // [esp+4h] [ebp-4h]
  float v4; // [esp+4h] [ebp-4h]
  float v5; // [esp+4h] [ebp-4h]
  float v6; // [esp+4h] [ebp-4h]
  float v7; // [esp+4h] [ebp-4h]
  float v8; // [esp+4h] [ebp-4h]
  float v9; // [esp+4h] [ebp-4h]
  float v10; // [esp+4h] [ebp-4h]

  v2 = this[1] * this[1] + *this * *this + this[2] * this[2];
  v3 = sqrt(v2);
  v4 = 1.0 / v3;
  *this = *this * v4;
  this[1] = v4 * this[1];
  this[2] = v4 * this[2];
  v5 = this[5] * this[5] + this[4] * this[4] + this[6] * this[6];
  v6 = sqrt(v5);
  v7 = 1.0 / v6;
  this[4] = this[4] * v7;
  this[5] = this[5] * v7;
  this[6] = v7 * this[6];
  v8 = this[9] * this[9] + this[8] * this[8] + this[10] * this[10];
  v9 = sqrt(v8);
  v10 = 1.0 / v9;
  result = this;
  this[8] = this[8] * v10;
  this[9] = this[9] * v10;
  this[10] = v10 * this[10];
  return result;
}
