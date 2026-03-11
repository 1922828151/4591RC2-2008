/*
 * func-name: sub_100849F0
 * func-address: 0x100849f0
 * callers: 0x10005e07
 * callees: 0x102c7070
 */

int __thiscall sub_100849F0(float *this)
{
  double v2; // st7
  double v3; // st7
  double v4; // st7
  double v5; // st7
  int result; // eax

  v2 = *this;
  sub_102C7070(*this, 0.0, 1.0);
  *this = v2;
  v3 = this[1];
  sub_102C7070(this[1], 0.0, 1.0);
  this[1] = v3;
  v4 = this[2];
  sub_102C7070(this[2], 0.0, 1.0);
  this[2] = v4;
  v5 = this[3];
  result = sub_102C7070(this[3], 0.0, 1.0);
  this[3] = v5;
  return result;
}
