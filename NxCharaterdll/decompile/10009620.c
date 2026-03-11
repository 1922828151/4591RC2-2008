/*
 * func-name: sub_10009620
 * func-address: 0x10009620
 * callers: 0x10001810, 0x10002260
 * callees: 0x10004b50
 */

float *__thiscall sub_10009620(float *this, float *a2, int a3)
{
  *(_DWORD *)this = &Controller::`vftable';
  sub_10004B50((_DWORD *)this + 10);
  *((_DWORD *)this + 88) = a3;
  this[2] = NAN;
  this[89] = 0.0;
  this[3] = a2[15];
  this[4] = a2[10];
  this[5] = a2[11];
  this[6] = a2[12];
  this[7] = a2[13];
  this[8] = a2[14];
  this[9] = a2[16];
  this[66] = 0.0;
  this[68] = a2[4];
  this[69] = a2[5];
  this[70] = a2[6];
  this[71] = a2[7];
  this[72] = a2[8];
  this[73] = a2[9];
  this[74] = a2[4];
  this[75] = a2[5];
  this[76] = a2[6];
  this[77] = a2[7];
  this[78] = a2[8];
  this[79] = a2[9];
  this[80] = a2[4];
  this[81] = a2[5];
  this[82] = a2[6];
  this[83] = a2[7];
  this[84] = a2[8];
  this[85] = a2[9];
  *((double *)this + 43) = *(double *)&a2[2 * *((_DWORD *)this + 4) + 4];
  *((_BYTE *)this + 360) = 0.0 != a2[11];
  return this;
}
