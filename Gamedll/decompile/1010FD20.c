/*
 * func-name: ??4RobotAsyncLoaderReport@GameClient@@QAEAAV01@ABV01@@Z_0
 * func-address: 0x1010fd20
 * callers: 0x1000c072
 * callees: none
 */

_DWORD *__thiscall GameClient::RobotAsyncLoaderReport::operator=(_DWORD *this, int a2)
{
  _DWORD *result; // eax

  result = this;
  this[1] = *(_DWORD *)(a2 + 4);
  return result;
}
