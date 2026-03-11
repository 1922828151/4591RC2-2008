/*
 * func-name: ?GetFlyweightID@WorldObject@GameClient@@QBEKXZ_0
 * func-address: 0x10032e90
 * callers: 0x10008783
 * callees: none
 */

unsigned int __thiscall GameClient::WorldObject::GetFlyweightID(GameClient::WorldObject *this)
{
  return *((_DWORD *)this + 1);
}
