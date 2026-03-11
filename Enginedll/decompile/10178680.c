/*
 * func-name: sub_10178680
 * func-address: 0x10178680
 * callers: 0x1008ce00
 * callees: none
 */

int __thiscall sub_10178680(float *this, float a2, float a3, float a4)
{
  int result; // eax

  this[12] = a2;
  this[13] = a3;
  result = LODWORD(a4);
  this[14] = a4;
  return result;
}
