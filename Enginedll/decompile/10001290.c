/*
 * func-name: ??4Factory@@QAEAAV0@ABV0@@Z
 * func-address: 0x10001290
 * callers: none
 * callees: none
 */

_BYTE *__thiscall Factory::operator=(_BYTE *this, int a2)
{
  this[4] = *(_BYTE *)(a2 + 4);
  this[5] = *(_BYTE *)(a2 + 5);
  std::string::operator=(this + 8, a2 + 8);
  return this;
}
