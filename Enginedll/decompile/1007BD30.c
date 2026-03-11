/*
 * func-name: sub_1007BD30
 * func-address: 0x1007bd30
 * callers: 0x1007c450, 0x1008ce00, 0x10092c60
 * callees: 0x10178c20
 */

float *__thiscall sub_1007BD30(const void *this, float *a2)
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
  sub_10178C20(a2);
  return a2;
}
