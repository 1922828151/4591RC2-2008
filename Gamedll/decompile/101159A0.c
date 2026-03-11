/*
 * func-name: sub_101159A0
 * func-address: 0x101159a0
 * callers: 0x1001761b
 * callees: none
 */

_DWORD *__thiscall sub_101159A0(_DWORD *this, void *a2, _DWORD *a3)
{
  std::string::string(this, a2);
  this[7] = *a3;
  AnimationSet::AnimationSet((AnimationSet *)(this + 8), (const struct AnimationSet *)(a3 + 1));
  this[19] = a3[12];
  return this;
}
