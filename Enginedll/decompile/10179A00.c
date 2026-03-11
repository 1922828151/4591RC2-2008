/*
 * func-name: sub_10179A00
 * func-address: 0x10179a00
 * callers: none
 * callees: 0x101a251c
 */

float *__thiscall sub_10179A00(float *this, float *a2)
{
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
  a2[12] = this[12];
  a2[13] = this[13];
  a2[14] = this[14];
  return a2;
}
