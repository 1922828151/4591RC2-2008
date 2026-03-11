/*
 * func-name: sub_10017390
 * func-address: 0x10017390
 * callers: 0x100126b0, 0x10023610, 0x1002e2e0
 * callees: none
 */

float *__thiscall sub_10017390(float *this)
{
  float *result; // eax

  result = this;
  this[3] = 0.0;
  this[2] = NAN;
  this[5] = 0.0;
  this[4] = NAN;
  *this = 0.0;
  *((_DWORD *)this + 2) = 34;
  *((_DWORD *)this + 1) = 1;
  *((_BYTE *)this + 24) = 1;
  *((_BYTE *)this + 25) = 1;
  *((_BYTE *)this + 26) = 0;
  *((_BYTE *)this + 27) = 0;
  return result;
}
