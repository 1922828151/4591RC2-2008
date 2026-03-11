/*
 * func-name: ??4RobotCallback@GameClient@@QAEAAV01@ABV01@@Z_0
 * func-address: 0x100339d0
 * callers: 0x1000d5da
 * callees: none
 */

_DWORD *__thiscall GameClient::RobotCallback::operator=(_DWORD *this, int a2)
{
  _DWORD *result; // eax

  result = this;
  this[1] = *(_DWORD *)(a2 + 4);
  return result;
}
