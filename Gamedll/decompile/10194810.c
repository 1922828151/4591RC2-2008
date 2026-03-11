/*
 * func-name: ??1SystemPart@GameClient@@UAE@XZ_0
 * func-address: 0x10194810
 * callers: 0x10012b07
 * callees: none
 */

void __thiscall GameClient::SystemPart::~SystemPart(GameClient::SystemPart *this)
{
  *(_DWORD *)this = &GameClient::SystemPart::`vftable';
  GameClient::WorldObject::~WorldObject(this);
}
