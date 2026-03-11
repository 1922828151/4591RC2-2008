/*
 * func-name: sub_101A05F0
 * func-address: 0x101a05f0
 * callers: 0x1000dd05
 * callees: none
 */

_DWORD *__thiscall sub_101A05F0(_DWORD *this, int a2)
{
  this[1] = a2;
  *this = &GameClient::Estab_State_Damaged_Idle::`vftable';
  AnimationSet::AnimationSet((AnimationSet *)(this + 3));
  return this;
}
