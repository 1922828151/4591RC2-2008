/*
 * func-name: ??0Booty@GameClient@@QAE@ABV01@@Z_0
 * func-address: 0x10147550
 * callers: 0x100122e7
 * callees: 0x10004732, 0x10011d1a
 */

GameClient::Booty *__thiscall GameClient::Booty::Booty(GameClient::Booty *this, const struct GameClient::Booty *a2)
{
  GameClient::WorldObject::WorldObject(this, a2);
  *(_DWORD *)this = &GameClient::Booty::`vftable';
  sub_10004732((int)a2 + 148);
  *((float *)this + 41) = *((float *)a2 + 41);
  *((float *)this + 42) = *((float *)a2 + 42);
  *((_BYTE *)this + 172) = *((_BYTE *)a2 + 172);
  *((_BYTE *)this + 173) = *((_BYTE *)a2 + 173);
  *((_DWORD *)this + 44) = *((_DWORD *)a2 + 44);
  *((_DWORD *)this + 45) = *((_DWORD *)a2 + 45);
  *((_DWORD *)this + 46) = *((_DWORD *)a2 + 46);
  return this;
}
