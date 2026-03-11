/*
 * func-name: ??1EstabDoor@GameClient@@UAE@XZ_0
 * func-address: 0x101a0a60
 * callers: 0x10007edc
 * callees: 0x10017e1d
 */

void __thiscall GameClient::EstabDoor::~EstabDoor(GameClient::EstabDoor *this)
{
  *(_DWORD *)this = &GameClient::EstabDoor::`vftable'{for `GameClient::WorldObject'};
  *((_DWORD *)this + 37) = &GameClient::EstabDoor::`vftable'{for `GameClient::DamageUnit'};
  AnimationSet::~AnimationSet((GameClient::EstabDoor *)((char *)this + 772));
  AnimationSet::~AnimationSet((GameClient::EstabDoor *)((char *)this + 728));
  AnimationSet::~AnimationSet((GameClient::EstabDoor *)((char *)this + 684));
  AnimationSet::~AnimationSet((GameClient::EstabDoor *)((char *)this + 640));
  AnimationSet::~AnimationSet((GameClient::EstabDoor *)((char *)this + 596));
  AnimationSet::~AnimationSet((GameClient::EstabDoor *)((char *)this + 552));
  AnimationSet::~AnimationSet((GameClient::EstabDoor *)((char *)this + 508));
  GameClient::NonControlledEstab::~NonControlledEstab(this);
}
