/*
 * func-name: sub_1006BDB0
 * func-address: 0x1006bdb0
 * callers: 0x10068320
 * callees: none
 */

float *__thiscall sub_1006BDB0(float *this, int a2, int a3, int a4, int a5, int a6, float a7, float a8)
{
  float *result; // eax

  result = this;
  *this = 0.0;
  this[1] = 0.0;
  this[2] = 0.0;
  this[3] = 0.0;
  *(_DWORD *)this = a2;
  this[5] = a7;
  *((_DWORD *)this + 1) = a3;
  this[6] = a8;
  *((_DWORD *)this + 2) = a4;
  *((_DWORD *)this + 3) = a5;
  *((_DWORD *)this + 4) = a6;
  return result;
}
