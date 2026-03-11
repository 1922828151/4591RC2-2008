/*
 * func-name: ??4DynLib@@QAEAAV0@ABV0@@Z
 * func-address: 0x1007e6c0
 * callers: none
 * callees: none
 */

_DWORD *__thiscall DynLib::operator=(_DWORD *this, int a2)
{
  std::string::operator=(this, a2);
  this[7] = *(_DWORD *)(a2 + 28);
  return this;
}
