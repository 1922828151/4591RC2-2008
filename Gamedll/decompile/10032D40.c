/*
 * func-name: ??4DataObject@GameClient@@QAEAAV01@ABV01@@Z_0
 * func-address: 0x10032d40
 * callers: 0x1000eac5
 * callees: none
 */

_DWORD *__thiscall GameClient::DataObject::operator=(_DWORD *this, int a2)
{
  _DWORD *result; // eax

  result = this;
  this[1] = *(_DWORD *)(a2 + 4);
  this[2] = *(_DWORD *)(a2 + 8);
  return result;
}
