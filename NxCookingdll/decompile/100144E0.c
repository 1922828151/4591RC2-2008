/*
 * func-name: sub_100144E0
 * func-address: 0x100144e0
 * callers: 0x10024be0
 * callees: 0x1000f8c0
 */

float *__thiscall sub_100144E0(float *this)
{
  *(_DWORD *)this = &TriangleMesh::`vftable';
  sub_1000F8C0(this + 1);
  this[32] = 3.4028235e38;
  this[33] = 3.4028235e38;
  this[34] = 3.4028235e38;
  this[35] = -3.4028235e38;
  this[36] = -3.4028235e38;
  this[37] = -3.4028235e38;
  *((_DWORD *)this + 43) = 255;
  *((_DWORD *)this + 44) = 255;
  this[42] = 0.0;
  this[45] = 0.0;
  this[46] = 0.0;
  this[47] = 0.0;
  this[48] = 0.0;
  this[49] = 0.0;
  this[50] = 0.0;
  this[51] = 0.0;
  this[52] = -1.0;
  return this;
}
