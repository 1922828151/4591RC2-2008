/*
 * func-name: ??0OccupyIcon@GameClient@@QAE@ABV01@@Z_0
 * func-address: 0x1016cfc0
 * callers: 0x10014a56
 * callees: 0x1000524f, 0x10018d68
 */

GameClient::OccupyIcon *__thiscall GameClient::OccupyIcon::OccupyIcon(
        GameClient::OccupyIcon *this,
        const struct GameClient::OccupyIcon *a2)
{
  GameClient::Establishment::Establishment(this, a2);
  *(_DWORD *)this = &GameClient::NonControlledEstab::`vftable'{for `GameClient::WorldObject'};
  *((_DWORD *)this + 37) = &GameClient::NonControlledEstab::`vftable'{for `GameClient::DamageUnit'};
  *((_DWORD *)this + 114) = *((_DWORD *)a2 + 114);
  *((_DWORD *)this + 115) = *((_DWORD *)a2 + 115);
  *((_BYTE *)this + 464) = *((_BYTE *)a2 + 464);
  *(_DWORD *)this = &GameClient::OccupyIcon::`vftable'{for `GameClient::WorldObject'};
  *((_DWORD *)this + 37) = &GameClient::OccupyIcon::`vftable'{for `GameClient::DamageUnit'};
  sub_10018D68((int)a2 + 472);
  *((_DWORD *)this + 128) = *((_DWORD *)a2 + 128);
  *((_DWORD *)this + 129) = *((_DWORD *)a2 + 129);
  *((_DWORD *)this + 130) = *((_DWORD *)a2 + 130);
  return this;
}
