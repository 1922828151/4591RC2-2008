/*
 * func-name: sub_102C2C50
 * func-address: 0x102c2c50
 * callers: none
 * callees: 0x102c16a0
 */

float *__thiscall sub_102C2C50(const void *this, float *a2)
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
  sub_102C16A0(a2);
  return a2;
}
