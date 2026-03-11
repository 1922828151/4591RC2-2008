/*
 * func-name: ?GetFlyweightID@DataObject@GameClient@@QBEKXZ_0
 * func-address: 0x10032ce0
 * callers: 0x10018985
 * callees: none
 */

unsigned int __thiscall GameClient::DataObject::GetFlyweightID(GameClient::DataObject *this)
{
  return *((_DWORD *)this + 1);
}
