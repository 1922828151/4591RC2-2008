/*
 * func-name: sub_1019FC50
 * func-address: 0x1019fc50
 * callers: 0x100183ae
 * callees: none
 */

float *__thiscall sub_1019FC50(float *this, int a2, float a3)
{
  this[3] = 0.0;
  *((_DWORD *)this + 1) = a2;
  this[4] = a3;
  *((_DWORD *)this + 2) = 1;
  this[5] = 0.0;
  this[6] = 10.0;
  *(_DWORD *)this = &GameClient::CtlEstabTransStateDistortion::`vftable';
  this[7] = NAN;
  AnimationSet::AnimationSet((AnimationSet *)(this + 8));
  this[19] = 0.0;
  this[20] = NAN;
  AnimationSet::AnimationSet((AnimationSet *)(this + 21));
  return this;
}
