/*
 * func-name: sub_100DE500
 * func-address: 0x100de500
 * callers: 0x10015596
 * callees: 0x1000e3bd
 */

float *__thiscall sub_100DE500(const void *this, float *a2, float a3)
{
  *a2 = 0.0;
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
  qmemcpy(a2, this, 0x40u);
  sub_1000E3BD(a3);
  return a2;
}
