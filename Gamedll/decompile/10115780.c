/*
 * func-name: sub_10115780
 * func-address: 0x10115780
 * callers: 0x100173c8
 * callees: none
 */

_DWORD *__thiscall sub_10115780(_DWORD *this, _DWORD *a2)
{
  *this = *a2;
  AnimationSet::AnimationSet((AnimationSet *)(this + 1), (const struct AnimationSet *)(a2 + 1));
  this[12] = a2[12];
  return this;
}
