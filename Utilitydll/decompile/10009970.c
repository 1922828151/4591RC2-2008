/*
 * func-name: ??4outpop_exception@Utility@Outpop@@QAEAAV012@ABV012@@Z
 * func-address: 0x10009970
 * callers: none
 * callees: none
 */

_DWORD *__thiscall Outpop::Utility::outpop_exception::operator=(_DWORD *this, int a2)
{
  std::exception::operator=(a2);
  this[3] = *(_DWORD *)(a2 + 12);
  return this;
}
