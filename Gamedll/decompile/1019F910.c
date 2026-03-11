/*
 * func-name: sub_1019F910
 * func-address: 0x1019f910
 * callers: 0x10007ab8
 * callees: none
 */

float *__thiscall sub_1019F910(float *this, int a2, float a3)
{
  this[3] = 0.0;
  *((_DWORD *)this + 1) = a2;
  this[4] = a3;
  this[2] = 0.0;
  this[5] = 0.0;
  this[6] = 10.0;
  *(_DWORD *)this = &GameClient::CtlEstabTransStateNormal::`vftable';
  this[7] = NAN;
  AnimationSet::AnimationSet((AnimationSet *)(this + 8));
  this[19] = 0.0;
  this[20] = NAN;
  AnimationSet::AnimationSet((AnimationSet *)(this + 21));
  return this;
}
