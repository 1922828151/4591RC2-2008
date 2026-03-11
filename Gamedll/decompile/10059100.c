/*
 * func-name: ??0SystemPart@GameClient@@QAE@ABV01@@Z_0
 * func-address: 0x10059100
 * callers: 0x1000de04
 * callees: 0x10011d1a
 */

GameClient::SystemPart *__thiscall GameClient::SystemPart::SystemPart(
        GameClient::SystemPart *this,
        const struct GameClient::SystemPart *a2)
{
  GameClient::WorldObject::WorldObject(this, a2);
  *(_DWORD *)this = &GameClient::SystemPart::`vftable';
  *((_DWORD *)this + 37) = *((_DWORD *)a2 + 37);
  return this;
}
