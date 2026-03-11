/*
 * func-name: sub_102C2910
 * func-address: 0x102c2910
 * callers: 0x102c2b60, 0x102c2ca0
 * callees: 0x102c9ea2
 */

float *__thiscall sub_102C2910(float *this)
{
  float *result; // eax
  float v3[16]; // [esp+Ch] [ebp-40h] BYREF

  memset(v3, 0, sizeof(v3));
  v3[15] = 1.0;
  v3[0] = *this;
  v3[1] = this[4];
  result = this;
  v3[2] = this[8];
  v3[4] = this[1];
  v3[5] = this[5];
  v3[6] = this[9];
  v3[8] = this[2];
  v3[9] = this[6];
  v3[10] = this[10];
  qmemcpy(this, v3, 0x40u);
  return result;
}
