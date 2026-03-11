/*
 * func-name: sub_102C13D0
 * func-address: 0x102c13d0
 * callers: 0x10036f50, 0x10092230, 0x100beff0
 * callees: 0x102ca08c, 0x102ca092
 */

void __thiscall sub_102C13D0(float *this, float a2)
{
  float v2; // [esp+0h] [ebp-4h]
  float v3; // [esp+8h] [ebp+4h]

  v2 = sin(a2);
  v3 = cos(a2);
  *this = v3;
  this[8] = v2;
  this[2] = -v2;
  this[10] = v3;
}
