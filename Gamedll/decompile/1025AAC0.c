/*
 * func-name: sub_1025AAC0
 * func-address: 0x1025aac0
 * callers: 0x1000e854
 * callees: 0x1000cd7e, 0x1000ed31
 */

float *__thiscall sub_1025AAC0(float *this, int a2)
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
  sub_1000CD7E(a2 + 40);
  sub_1000ED31(a2 + 56);
  this[18] = *(float *)(a2 + 72);
  this[19] = *(float *)(a2 + 76);
  return this;
}
