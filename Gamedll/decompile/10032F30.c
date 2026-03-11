/*
 * func-name: ?HasPlusinCapability@WorldObject@GameClient@@QBE_NW4PLUSIN_CAPABILITY@@@Z_0
 * func-address: 0x10032f30
 * callers: 0x10008e54
 * callees: none
 */

bool __thiscall GameClient::WorldObject::HasPlusinCapability(_DWORD *this, int a2)
{
  return (a2 & this[34]) != 0;
}
