/*
 * func-name: ?GetWorldObjectID@WorldObject@GameClient@@QBEKXZ_0
 * func-address: 0x10032e80
 * callers: 0x1000d382
 * callees: none
 */

unsigned int __thiscall GameClient::WorldObject::GetWorldObjectID(GameClient::WorldObject *this)
{
  return *((_DWORD *)this + 3);
}
