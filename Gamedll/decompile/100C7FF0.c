/*
 * func-name: sub_100C7FF0
 * func-address: 0x100c7ff0
 * callers: 0x100079c8
 * callees: 0x102c1270, 0x102c2120, 0x102c9ea2
 */

float *__thiscall sub_100C7FF0(float *this, int a2)
{
  float v4[16]; // [esp+10h] [ebp-40h] BYREF

  memset(v4, 0, sizeof(v4));
  sub_102C1270(1.0);
  v4[15] = 1.0;
  sub_102C2120(this, a2, v4);
  qmemcpy(this, v4, 0x40u);
  return this;
}
