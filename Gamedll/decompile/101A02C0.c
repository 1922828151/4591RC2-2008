/*
 * func-name: sub_101A02C0
 * func-address: 0x101a02c0
 * callers: 0x10012ce2
 * callees: none
 */

_DWORD *__thiscall sub_101A02C0(_DWORD *this, int a2)
{
  this[1] = a2;
  *this = &GameClient::Estab_State_Normal_Action::`vftable';
  AnimationSet::AnimationSet((AnimationSet *)(this + 3));
  return this;
}
