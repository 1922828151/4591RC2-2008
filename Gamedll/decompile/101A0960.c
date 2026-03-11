/*
 * func-name: ??0EstabDoor@GameClient@@QAE@K@Z_0
 * func-address: 0x101a0960
 * callers: 0x10012df5
 * callees: 0x10004c3c
 */

GameClient::EstabDoor *__thiscall GameClient::EstabDoor::EstabDoor(GameClient::EstabDoor *this, unsigned int a2)
{
  GameClient::NonControlledEstab::NonControlledEstab(this, a2);
  *(_DWORD *)this = &GameClient::EstabDoor::`vftable'{for `GameClient::WorldObject'};
  *((_DWORD *)this + 37) = &GameClient::EstabDoor::`vftable'{for `GameClient::DamageUnit'};
  *((_DWORD *)this + 119) = 4;
  AnimationSet::AnimationSet((GameClient::EstabDoor *)((char *)this + 508));
  AnimationSet::AnimationSet((GameClient::EstabDoor *)((char *)this + 552));
  AnimationSet::AnimationSet((GameClient::EstabDoor *)((char *)this + 596));
  AnimationSet::AnimationSet((GameClient::EstabDoor *)((char *)this + 640));
  AnimationSet::AnimationSet((GameClient::EstabDoor *)((char *)this + 684));
  AnimationSet::AnimationSet((GameClient::EstabDoor *)((char *)this + 728));
  AnimationSet::AnimationSet((GameClient::EstabDoor *)((char *)this + 772));
  *((_DWORD *)this + 120) = -1;
  *((_DWORD *)this + 121) = -1;
  *((_DWORD *)this + 122) = -1;
  *((_DWORD *)this + 123) = -1;
  *((_DWORD *)this + 124) = -1;
  *((_DWORD *)this + 125) = -1;
  *((_DWORD *)this + 126) = -1;
  return this;
}
