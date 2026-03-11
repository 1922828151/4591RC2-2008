/*
 * func-name: sub_10059160
 * func-address: 0x10059160
 * callers: 0x100162ed
 * callees: 0x10002720
 */

float *__thiscall sub_10059160(float *this, float *a2)
{
  *this = *a2;
  this[1] = a2[1];
  this[2] = a2[2];
  this[3] = a2[3];
  this[4] = a2[4];
  sub_10002720((int)(a2 + 5));
  sub_10002720((int)(a2 + 9));
  this[13] = a2[13];
  this[14] = a2[14];
  this[15] = a2[15];
  this[16] = a2[16];
  this[17] = a2[17];
  return this;
}
