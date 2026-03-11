/*
 * func-name: sub_10116630
 * func-address: 0x10116630
 * callers: 0x10003459
 * callees: none
 */

_DWORD *__thiscall sub_10116630(_DWORD *this, char *a2)
{
  std::string::string(this, a2);
  this[7] = *((_DWORD *)a2 + 7);
  AnimationSet::AnimationSet((AnimationSet *)(this + 8), (const struct AnimationSet *)(a2 + 32));
  this[19] = *((_DWORD *)a2 + 19);
  return this;
}
