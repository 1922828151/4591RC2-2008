/*
 * func-name: sub_102C1380
 * func-address: 0x102c1380
 * callers: 0x10092230
 * callees: 0x102ca08c, 0x102ca092
 */

void __thiscall sub_102C1380(float *this, float a2)
{
  float v2; // [esp+0h] [ebp-4h]
  float v3; // [esp+8h] [ebp+4h]

  v2 = sin(a2);
  v3 = cos(a2);
  this[5] = v3;
  this[9] = -v2;
  this[6] = v2;
  this[10] = v3;
}
