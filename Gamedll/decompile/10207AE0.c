/*
 * func-name: sub_10207AE0
 * func-address: 0x10207ae0
 * callers: 0x100198e4
 * callees: 0x1000ab05, 0x1000bbfe
 */

float *__thiscall sub_10207AE0(float *this, int a2, float *a3)
{
  float *v4; // eax

  sub_1000BBFE(a2);
  v4 = a3;
  *(_DWORD *)this = &GameClient::LocalCharacter::`vftable';
  this[58] = *v4;
  this[59] = v4[1];
  this[60] = v4[2];
  this[61] = v4[3];
  this[62] = v4[4];
  sub_1000AB05((int)&a2, (int)&a2);
  this[75] = 0.0;
  this[73] = NAN;
  this[77] = NAN;
  this[74] = 0.0;
  *((_BYTE *)this + 304) = 0;
  *((_BYTE *)this + 212) = 1;
  return this;
}
