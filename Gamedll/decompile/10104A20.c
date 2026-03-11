/*
 * func-name: ??4PartAsyncLoaderReport@GameClient@@QAEAAV01@ABV01@@Z_0
 * func-address: 0x10104a20
 * callers: 0x10004958
 * callees: none
 */

_DWORD *__thiscall GameClient::PartAsyncLoaderReport::operator=(_DWORD *this, int a2)
{
  _DWORD *result; // eax

  result = this;
  this[1] = *(_DWORD *)(a2 + 4);
  return result;
}
