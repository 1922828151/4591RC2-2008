/*
 * func-name: ??0NonControlledEstab@GameClient@@QAE@ABV01@@Z_0
 * func-address: 0x1016b830
 * callers: 0x10004b15
 * callees: 0x1000524f
 */

GameClient::NonControlledEstab *__thiscall GameClient::NonControlledEstab::NonControlledEstab(
        GameClient::NonControlledEstab *this,
        const struct GameClient::NonControlledEstab *a2)
{
  GameClient::Establishment::Establishment(this, a2);
  *(_DWORD *)this = &GameClient::NonControlledEstab::`vftable'{for `GameClient::WorldObject'};
  *((_DWORD *)this + 37) = &GameClient::NonControlledEstab::`vftable'{for `GameClient::DamageUnit'};
  *((_DWORD *)this + 114) = *((_DWORD *)a2 + 114);
  *((_DWORD *)this + 115) = *((_DWORD *)a2 + 115);
  *((_BYTE *)this + 464) = *((_BYTE *)a2 + 464);
  return this;
}
