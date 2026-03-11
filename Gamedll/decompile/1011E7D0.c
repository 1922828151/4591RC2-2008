/*
 * func-name: ?SetControllerType@Seat@GameClient@@QAEXW4ESTAB_CONTROLLER@@@Z_0
 * func-address: 0x1011e7d0
 * callers: 0x10005ffb
 * callees: none
 */

int __thiscall GameClient::Seat::SetControllerType(_DWORD *this, int a2)
{
  int result; // eax

  result = a2;
  this[23] = a2;
  return result;
}
