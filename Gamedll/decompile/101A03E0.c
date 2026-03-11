/*
 * func-name: sub_101A03E0
 * func-address: 0x101a03e0
 * callers: 0x10010c35
 * callees: none
 */

_DWORD *__thiscall sub_101A03E0(_DWORD *this, int a2)
{
  this[1] = a2;
  *this = &GameClient::Estab_State_Normal_Idle::`vftable';
  AnimationSet::AnimationSet((AnimationSet *)(this + 3));
  return this;
}
