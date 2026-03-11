/*
 * func-name: sub_100366C0
 * func-address: 0x100366c0
 * callers: 0x1000d125
 * callees: none
 */

float *__thiscall sub_100366C0(float *this, int a2, int a3)
{
  int v4; // edx
  float *result; // eax

  this[3] = 0.333;
  *((_DWORD *)this + 6) = a2;
  this[9] = 1.0;
  *((_DWORD *)this + 7) = a3;
  this[2] = 0.0;
  this[4] = 0.0;
  this[8] = 0.0;
  this[1] = 0.0;
  this[5] = 0.0;
  *(_BYTE *)this = 0;
  v4 = rand() % 7;
  result = this;
  this[11] = (float)(v4 + 1);
  this[10] = 0.0;
  this[12] = 0.0;
  this[13] = 0.0;
  this[14] = 100.0;
  return result;
}
