/*
 * func-name: sub_10049720
 * func-address: 0x10049720
 * callers: 0x10018aca
 * callees: 0x102c1270, 0x102c2120, 0x102c9ea2
 */

float *__thiscall sub_10049720(void *this, float *a2, int a3)
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
  memset(a2, 0, 0x40u);
  sub_102C1270(1.0);
  a2[15] = 1.0;
  sub_102C2120(this, a3, a2);
  return a2;
}
