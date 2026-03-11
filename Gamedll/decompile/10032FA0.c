/*
 * func-name: ?EnableBuffState@WorldObject@GameClient@@UAEXK@Z_0
 * func-address: 0x10032fa0
 * callers: 0x100071d5
 * callees: none
 */

void __thiscall GameClient::WorldObject::EnableBuffState(GameClient::WorldObject *this, unsigned int a2)
{
  *((_DWORD *)this + 35) |= a2;
}
