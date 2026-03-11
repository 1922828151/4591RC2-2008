/*
 * func-name: sub_102C1420
 * func-address: 0x102c1420
 * callers: 0x10092230
 * callees: 0x102ca08c, 0x102ca092
 */

void __thiscall sub_102C1420(float *this, float a2)
{
  float v2; // [esp+0h] [ebp-4h]
  float v3; // [esp+8h] [ebp+4h]

  v2 = sin(a2);
  v3 = cos(a2);
  *this = v3;
  this[4] = -v2;
  this[1] = v2;
  this[5] = v3;
}
