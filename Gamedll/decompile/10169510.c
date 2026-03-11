/*
 * func-name: ??1OccupyIcon@GameClient@@UAE@XZ_0
 * func-address: 0x10169510
 * callers: 0x100025f9
 * callees: 0x10010aaf, 0x102c9d50
 */

void __thiscall GameClient::OccupyIcon::~OccupyIcon(GameClient::OccupyIcon *this)
{
  *(_DWORD *)this = &GameClient::OccupyIcon::`vftable'{for `GameClient::WorldObject'};
  *((_DWORD *)this + 37) = &GameClient::OccupyIcon::`vftable'{for `GameClient::DamageUnit'};
  if ( *((_DWORD *)this + 123) )
    operator delete(*((void **)this + 123));
  *((_DWORD *)this + 123) = 0;
  *((_DWORD *)this + 124) = 0;
  *((_DWORD *)this + 125) = 0;
  sub_10010AAF();
  GameClient::NonControlledEstab::~NonControlledEstab(this);
}
