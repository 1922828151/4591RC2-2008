/*
 * func-name: sub_100015C0
 * func-address: 0x100015c0
 * callers: none
 * callees: none
 */

float *__thiscall sub_100015C0(float *this, float *a2)
{
  float *result; // eax
  float v3; // [esp+0h] [ebp-18h]
  float v4; // [esp+4h] [ebp-14h]
  float v5; // [esp+8h] [ebp-10h]
  float v6; // [esp+Ch] [ebp-Ch]
  float v7; // [esp+10h] [ebp-8h]
  float v8; // [esp+14h] [ebp-4h]

  result = a2;
  v3 = this[7] - this[4];
  v4 = this[8] - this[5];
  v5 = this[9] - this[6];
  v6 = v3 * 0.5;
  v7 = v4 * 0.5;
  v8 = 0.5 * v5;
  *a2 = this[4] + v6;
  a2[1] = this[5] + v7;
  a2[2] = this[6] + v8;
  return result;
}
