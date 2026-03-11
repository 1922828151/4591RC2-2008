/*
 * func-name: sub_101E09D0
 * func-address: 0x101e09d0
 * callers: 0x1000bbfe
 * callees: 0x10016c11
 */

float *__thiscall sub_101E09D0(float *this, int a2)
{
  *(_DWORD *)this = &GameClient::Character::`vftable';
  sub_10016C11(a2);
  this[56] = 0.0;
  *((_BYTE *)this + 212) = 0;
  this[54] = 0.0;
  this[55] = 0.0;
  this[57] = 0.0;
  return this;
}
