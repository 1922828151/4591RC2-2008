/*
 * func-name: sub_10100E40
 * func-address: 0x10100e40
 * callers: 0x1001497a
 * callees: none
 */

_DWORD *__thiscall sub_10100E40(_DWORD *this, void *a2, const struct AnimationSet *a3)
{
  std::string::string(this, a2);
  AnimationSet::AnimationSet((AnimationSet *)(this + 7), a3);
  this[18] = *((_DWORD *)a3 + 11);
  return this;
}
