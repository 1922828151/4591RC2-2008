/*
 * func-name: sub_101A04D0
 * func-address: 0x101a04d0
 * callers: 0x10003fc1
 * callees: none
 */

_DWORD *__thiscall sub_101A04D0(_DWORD *this, int a2)
{
  this[1] = a2;
  *this = &GameClient::Estab_State_Damaged_Action::`vftable';
  AnimationSet::AnimationSet((AnimationSet *)(this + 3));
  return this;
}
