/*
 * func-name: ?UnloadResource@EstabDoor@GameClient@@UAEXXZ_0
 * func-address: 0x101a0ca0
 * callers: 0x1001262a
 * callees: none
 */

void __thiscall GameClient::EstabDoor::UnloadResource(GameClient::EstabDoor *this)
{
  AnimationSet::Destroy((GameClient::EstabDoor *)((char *)this + 508));
  AnimationSet::Destroy((GameClient::EstabDoor *)((char *)this + 552));
  AnimationSet::Destroy((GameClient::EstabDoor *)((char *)this + 640));
  AnimationSet::Destroy((GameClient::EstabDoor *)((char *)this + 684));
  AnimationSet::Destroy((GameClient::EstabDoor *)((char *)this + 728));
  AnimationSet::Destroy((GameClient::EstabDoor *)((char *)this + 772));
  GameClient::NonControlledEstab::UnloadResource(this);
}
