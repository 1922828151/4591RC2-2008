/*
 * func-name: ?AddLocalCharacterRef@WorldObject@GameClient@@QAEXXZ_0
 * func-address: 0x10032e50
 * callers: 0x100064f6
 * callees: none
 */

void __thiscall GameClient::WorldObject::AddLocalCharacterRef(GameClient::WorldObject *this)
{
  ++*((_DWORD *)this + 26);
}
