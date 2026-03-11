/*
 * func-name: ?AddPlusinCapability@WorldObject@GameClient@@QAEXW4PLUSIN_CAPABILITY@@@Z_0
 * func-address: 0x10032f50
 * callers: 0x1000ddc8
 * callees: none
 */

int __thiscall GameClient::WorldObject::AddPlusinCapability(_DWORD *this, int a2)
{
  int result; // eax

  result = a2;
  this[34] |= a2;
  return result;
}
