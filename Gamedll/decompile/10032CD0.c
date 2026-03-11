/*
 * func-name: ?SetFlyweightID@DataObject@GameClient@@QAEXK@Z_0
 * func-address: 0x10032cd0
 * callers: 0x1000a18c
 * callees: none
 */

void __thiscall GameClient::DataObject::SetFlyweightID(GameClient::DataObject *this, unsigned int a2)
{
  *((_DWORD *)this + 1) = a2;
}
