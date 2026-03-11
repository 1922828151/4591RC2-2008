/*
 * func-name: ?SetBuffState@WorldObject@GameClient@@UAEXK@Z_0
 * func-address: 0x10032fe0
 * callers: 0x1000c3a6
 * callees: none
 */

void __thiscall GameClient::WorldObject::SetBuffState(GameClient::WorldObject *this, unsigned int a2)
{
  *((_DWORD *)this + 35) = a2;
}
