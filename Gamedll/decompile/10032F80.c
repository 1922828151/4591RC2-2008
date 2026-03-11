/*
 * func-name: ?HasBuffState@WorldObject@GameClient@@UAE_NW4BUFF_STATE@@@Z_0
 * func-address: 0x10032f80
 * callers: 0x10008067
 * callees: none
 */

bool __thiscall GameClient::WorldObject::HasBuffState(_DWORD *this, int a2)
{
  return (a2 & this[35]) != 0;
}
