/*
 * func-name: ??0OccupyIcon@GameClient@@QAE@K@Z_0
 * func-address: 0x10169570
 * callers: 0x1000167c
 * callees: 0x10004c3c, 0x10011e14
 */

GameClient::OccupyIcon *__thiscall GameClient::OccupyIcon::OccupyIcon(GameClient::OccupyIcon *this, unsigned int a2)
{
  GameClient::OccupyIcon *result; // eax

  GameClient::NonControlledEstab::NonControlledEstab(this, a2);
  *(_DWORD *)this = &GameClient::OccupyIcon::`vftable'{for `GameClient::WorldObject'};
  *((_DWORD *)this + 37) = &GameClient::OccupyIcon::`vftable'{for `GameClient::DamageUnit'};
  sub_10011E14((int)&a2, (int)&a2);
  *((float *)this + 128) = 0.0;
  result = this;
  *((float *)this + 129) = 0.0;
  *((float *)this + 130) = 0.0;
  return result;
}
