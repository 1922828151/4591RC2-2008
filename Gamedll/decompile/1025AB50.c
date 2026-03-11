/*
 * func-name: sub_1025AB50
 * func-address: 0x1025ab50
 * callers: 0x10001fc8
 * callees: 0x1000885f, 0x1000fe8e
 */

float *__thiscall sub_1025AB50(float *this, int a2)
{
  *(_BYTE *)this = *(_BYTE *)a2;
  *((_BYTE *)this + 1) = *(_BYTE *)(a2 + 1);
  this[1] = *(float *)(a2 + 4);
  this[2] = *(float *)(a2 + 8);
  this[3] = *(float *)(a2 + 12);
  this[4] = *(float *)(a2 + 16);
  this[5] = *(float *)(a2 + 20);
  this[6] = *(float *)(a2 + 24);
  this[7] = *(float *)(a2 + 28);
  this[8] = *(float *)(a2 + 32);
  this[9] = *(float *)(a2 + 36);
  sub_1000885F(a2 + 40);
  sub_1000FE8E(a2 + 56);
  this[18] = *(float *)(a2 + 72);
  this[19] = *(float *)(a2 + 76);
  return this;
}
