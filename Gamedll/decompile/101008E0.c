/*
 * func-name: sub_101008E0
 * func-address: 0x101008e0
 * callers: 0x10011c43
 * callees: none
 */

_DWORD *__thiscall sub_101008E0(_DWORD *this, char *a2)
{
  std::string::string(this, a2);
  AnimationSet::AnimationSet((AnimationSet *)(this + 7), (const struct AnimationSet *)(a2 + 28));
  this[18] = *((_DWORD *)a2 + 18);
  return this;
}
