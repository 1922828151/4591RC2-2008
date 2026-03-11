/*
 * func-name: ??0SystemPart@GameClient@@QAE@K@Z_0
 * func-address: 0x101947e0
 * callers: 0x10008634
 * callees: 0x10016fef
 */

GameClient::SystemPart *__thiscall GameClient::SystemPart::SystemPart(GameClient::SystemPart *this, unsigned int a2)
{
  GameClient::WorldObject::WorldObject(this, a2);
  *(_DWORD *)this = &GameClient::SystemPart::`vftable';
  *((_DWORD *)this + 37) = 0;
  return this;
}
