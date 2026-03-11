/*
 * func-name: ??0NonControlledEstab@GameClient@@QAE@K@Z_0
 * func-address: 0x101b0680
 * callers: 0x10004c3c
 * callees: 0x10005a60
 */

GameClient::NonControlledEstab *__thiscall GameClient::NonControlledEstab::NonControlledEstab(
        GameClient::NonControlledEstab *this,
        unsigned int a2)
{
  GameClient::Establishment::Establishment(this, a2);
  *((_DWORD *)this + 115) = 0;
  *((_BYTE *)this + 464) = 0;
  *(_DWORD *)this = &GameClient::NonControlledEstab::`vftable'{for `GameClient::WorldObject'};
  *((_DWORD *)this + 37) = &GameClient::NonControlledEstab::`vftable'{for `GameClient::DamageUnit'};
  return this;
}
