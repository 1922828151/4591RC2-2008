/*
 * func-name: ?RemoveLocalCharacterRef@WorldObject@GameClient@@QAEXXZ_0
 * func-address: 0x10032e60
 * callers: 0x100139ee
 * callees: none
 */

void __thiscall GameClient::WorldObject::RemoveLocalCharacterRef(GameClient::WorldObject *this)
{
  --*((_DWORD *)this + 26);
}
