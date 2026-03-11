/*
 * func-name: ?DisableBuffState@WorldObject@GameClient@@UAEXK@Z_0
 * func-address: 0x10032fb0
 * callers: 0x100186d3
 * callees: none
 */

void __thiscall GameClient::WorldObject::DisableBuffState(GameClient::WorldObject *this, unsigned int a2)
{
  *((_DWORD *)this + 35) &= ~a2;
}
