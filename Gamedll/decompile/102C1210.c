/*
 * func-name: sub_102C1210
 * func-address: 0x102c1210
 * callers: none
 * callees: none
 */

int __thiscall sub_102C1210(float *this, float a2, float a3, float a4)
{
  int result; // eax

  this[12] = a2;
  this[13] = a3;
  result = LODWORD(a4);
  this[14] = a4;
  return result;
}
