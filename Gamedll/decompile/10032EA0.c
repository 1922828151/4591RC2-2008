/*
 * func-name: ?GetCharacterID@WorldObject@GameClient@@QBEKXZ_0
 * func-address: 0x10032ea0
 * callers: 0x10019e52
 * callees: none
 */

unsigned int __thiscall GameClient::WorldObject::GetCharacterID(GameClient::WorldObject *this)
{
  return *((_DWORD *)this + 4);
}
