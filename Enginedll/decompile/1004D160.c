/*
 * func-name: sub_1004D160
 * func-address: 0x1004d160
 * callers: 0x1004e070
 * callees: 0x1004d120
 */

BOOL __thiscall sub_1004D160(float *this, float *a2)
{
  return *this == *a2
      && this[1] == a2[1]
      && this[2] == a2[2]
      && this[4] == a2[4]
      && this[5] == a2[5]
      && this[6] == a2[6]
      && sub_1004D120(a2 + 8, this + 8)
      && sub_1004D120(a2 + 12, this + 12);
}
