/*
 * func-name: ??4win32_error@Utility@Outpop@@QAEAAV012@ABV012@@Z
 * func-address: 0x1000a5b0
 * callers: none
 * callees: none
 */

_DWORD *__thiscall Outpop::Utility::win32_error::operator=(_DWORD *this, int a2)
{
  std::exception::operator=(a2);
  this[3] = *(_DWORD *)(a2 + 12);
  this[4] = *(_DWORD *)(a2 + 16);
  return this;
}
