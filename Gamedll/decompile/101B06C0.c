/*
 * func-name: ??1NonControlledEstab@GameClient@@UAE@XZ_0
 * func-address: 0x101b06c0
 * callers: 0x10017e1d
 * callees: none
 */

void __thiscall GameClient::NonControlledEstab::~NonControlledEstab(GameClient::Establishment *this)
{
  *(_DWORD *)this = &GameClient::NonControlledEstab::`vftable'{for `GameClient::WorldObject'};
  *((_DWORD *)this + 37) = &GameClient::NonControlledEstab::`vftable'{for `GameClient::DamageUnit'};
  GameClient::Establishment::~Establishment(this);
}
