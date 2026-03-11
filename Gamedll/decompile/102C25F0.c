/*
 * func-name: sub_102C25F0
 * func-address: 0x102c25f0
 * callers: none
 * callees: 0x102c9dbc, 0x102c9ea2
 */

float *__thiscall sub_102C25F0(float *this, float *a2)
{
  float v5; // [esp+Ch] [ebp+4h]
  float v6; // [esp+Ch] [ebp+4h]
  float v7; // [esp+Ch] [ebp+4h]
  float v8; // [esp+Ch] [ebp+4h]
  float v9; // [esp+Ch] [ebp+4h]
  float v10; // [esp+Ch] [ebp+4h]

  a2[1] = 0.0;
  a2[2] = 0.0;
  a2[4] = 0.0;
  a2[5] = 0.0;
  a2[6] = 0.0;
  a2[8] = 0.0;
  a2[9] = 0.0;
  a2[10] = 0.0;
  a2[12] = 0.0;
  a2[13] = 0.0;
  a2[14] = 0.0;
  memset(a2, 0, 0x40u);
  a2[10] = 1.0;
  a2[5] = 1.0;
  *a2 = 1.0;
  a2[15] = 1.0;
  v5 = this[1] * this[1] + *this * *this + this[2] * this[2];
  v6 = sqrt(v5);
  *a2 = v6;
  v7 = this[5] * this[5] + this[4] * this[4] + this[6] * this[6];
  v8 = sqrt(v7);
  a2[5] = v8;
  v9 = this[9] * this[9] + this[8] * this[8] + this[10] * this[10];
  v10 = sqrt(v9);
  a2[10] = v10;
  return a2;
}
