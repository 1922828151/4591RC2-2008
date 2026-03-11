/*
 * func-name: ?RemovePlusinCapability@WorldObject@GameClient@@QAEXW4PLUSIN_CAPABILITY@@@Z_0
 * func-address: 0x10032f60
 * callers: 0x10013c19
 * callees: none
 */

int __thiscall GameClient::WorldObject::RemovePlusinCapability(_DWORD *this, int a2)
{
  int result; // eax

  result = ~a2;
  this[34] &= ~a2;
  return result;
}
