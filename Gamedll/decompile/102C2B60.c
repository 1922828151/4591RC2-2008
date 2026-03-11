/*
 * func-name: sub_102C2B60
 * func-address: 0x102c2b60
 * callers: none
 * callees: 0x102c2910
 */

float *__thiscall sub_102C2B60(float *this)
{
  double v2; // st7
  double v3; // st6
  float *result; // eax
  float v5; // [esp+Ch] [ebp-84h]
  float v6; // [esp+Ch] [ebp-84h]
  float v7; // [esp+Ch] [ebp-84h]
  float v8[16]; // [esp+10h] [ebp-80h] BYREF
  float v9[16]; // [esp+50h] [ebp-40h] BYREF

  qmemcpy(v9, this, sizeof(v9));
  sub_102C2910(v9);
  v2 = this[13] * this[1];
  v3 = this[12];
  qmemcpy(v8, v9, sizeof(v8));
  v5 = v2 + v3 * *this + this[14] * this[2];
  v8[12] = -v5;
  result = this;
  v6 = this[13] * this[5] + this[12] * this[4] + this[14] * this[6];
  v8[13] = -v6;
  v7 = this[13] * this[9] + this[8] * this[12] + this[14] * this[10];
  v8[14] = -v7;
  qmemcpy(this, v8, 0x40u);
  return result;
}
