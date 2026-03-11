/*
 * func-name: ?LoadResource@EstabDoor@GameClient@@UAE_NXZ_0
 * func-address: 0x101a0b50
 * callers: 0x1000a6be
 * callees: 0x10014e02
 */

bool __thiscall GameClient::EstabDoor::LoadResource(GameClient::EstabDoor *this)
{
  bool result; // al

  result = GameClient::NonControlledEstab::LoadResource(this);
  if ( result )
  {
    if ( AnimationSet::GetDXSet((AnimationSet *)(*((_DWORD *)this + 118) + 716)) )
      AnimationSet::Clone(
        (AnimationSet *)(*((_DWORD *)this + 118) + 716),
        (GameClient::EstabDoor *)((char *)this + 508));
    if ( AnimationSet::GetDXSet((AnimationSet *)(*((_DWORD *)this + 118) + 760)) )
      AnimationSet::Clone(
        (AnimationSet *)(*((_DWORD *)this + 118) + 760),
        (GameClient::EstabDoor *)((char *)this + 552));
    if ( AnimationSet::GetDXSet((AnimationSet *)(*((_DWORD *)this + 118) + 804)) )
      AnimationSet::Clone(
        (AnimationSet *)(*((_DWORD *)this + 118) + 804),
        (GameClient::EstabDoor *)((char *)this + 596));
    if ( AnimationSet::GetDXSet((AnimationSet *)(*((_DWORD *)this + 118) + 848)) )
      AnimationSet::Clone(
        (AnimationSet *)(*((_DWORD *)this + 118) + 848),
        (GameClient::EstabDoor *)((char *)this + 640));
    if ( AnimationSet::GetDXSet((AnimationSet *)(*((_DWORD *)this + 118) + 892)) )
      AnimationSet::Clone(
        (AnimationSet *)(*((_DWORD *)this + 118) + 892),
        (GameClient::EstabDoor *)((char *)this + 684));
    if ( AnimationSet::GetDXSet((AnimationSet *)(*((_DWORD *)this + 118) + 936)) )
      AnimationSet::Clone(
        (AnimationSet *)(*((_DWORD *)this + 118) + 936),
        (GameClient::EstabDoor *)((char *)this + 728));
    if ( AnimationSet::GetDXSet((AnimationSet *)(*((_DWORD *)this + 118) + 980)) )
      AnimationSet::Clone(
        (AnimationSet *)(*((_DWORD *)this + 118) + 980),
        (GameClient::EstabDoor *)((char *)this + 772));
    return 1;
  }
  return result;
}
