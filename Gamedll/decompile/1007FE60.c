/*
 * func-name: sub_1007FE60
 * func-address: 0x1007fe60
 * callers: 0x10005646
 * callees: 0x102c9fe0
 */

int __thiscall sub_1007FE60(float *this)
{
  return (((int)(this[1] * 255.0) | (((int)(*this * 255.0) | ((int)(this[3] * 255.0) << 8)) << 8)) << 8)
       | (int)(255.0 * this[2]);
}
