/*
 * func-name: sub_100E0DF0
 * func-address: 0x100e0df0
 * callers: 0x100e1440
 * callees: 0x1017a160
 */

int __thiscall sub_100E0DF0(float *this)
{
  double v2; // st7
  double v3; // st7
  double v4; // st7
  double v5; // st7
  int result; // eax

  v2 = *this;
  sub_1017A160(*this, 0.0, 1.0);
  *this = v2;
  v3 = this[1];
  sub_1017A160(this[1], 0.0, 1.0);
  this[1] = v3;
  v4 = this[2];
  sub_1017A160(this[2], 0.0, 1.0);
  this[2] = v4;
  v5 = this[3];
  result = sub_1017A160(this[3], 0.0, 1.0);
  this[3] = v5;
  return result;
}
