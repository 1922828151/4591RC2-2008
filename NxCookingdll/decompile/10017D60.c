/*
 * func-name: sub_10017D60
 * func-address: 0x10017d60
 * callers: 0x10017e30
 * callees: none
 */

float *__thiscall sub_10017D60(float *this)
{
  float *result; // eax

  result = this;
  this[3] = 0.0;
  *((_DWORD *)this + 1) = 1;
  this[5] = 0.0;
  this[2] = NAN;
  this[4] = NAN;
  this[15] = 0.0;
  this[6] = 0.0;
  this[7] = 0.0;
  this[16] = 0.0;
  this[17] = 0.0;
  *(_DWORD *)this = &Opcode::AABBTreeOfAABBsBuilder::`vftable';
  this[18] = 0.0;
  return result;
}
