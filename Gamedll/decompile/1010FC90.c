/*
 * func-name: sub_1010FC90
 * func-address: 0x1010fc90
 * callers: 0x1000840e
 * callees: none
 */

_DWORD *__thiscall sub_1010FC90(_DWORD *this)
{
  AnimationSet::AnimationSet((AnimationSet *)(this + 1));
  *this = 0;
  this[12] = -1;
  return this;
}
