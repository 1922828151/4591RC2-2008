/*
 * func-name: ??4EquipAsyncLoaderReport@GameClient@@QAEAAV01@ABV01@@Z_0
 * func-address: 0x100fde50
 * callers: 0x1000b762
 * callees: none
 */

_DWORD *__thiscall GameClient::EquipAsyncLoaderReport::operator=(_DWORD *this, int a2)
{
  _DWORD *result; // eax

  result = this;
  this[1] = *(_DWORD *)(a2 + 4);
  return result;
}
