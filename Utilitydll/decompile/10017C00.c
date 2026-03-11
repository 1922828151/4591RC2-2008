/*
 * func-name: ??4CServiceHandlerInfor@Utility@Outpop@@QAEAAV012@ABV012@@Z
 * func-address: 0x10017c00
 * callers: none
 * callees: none
 */

_DWORD *__thiscall Outpop::Utility::CServiceHandlerInfor::operator=(_DWORD *this, _DWORD *a2)
{
  *this = *a2;
  std::string::operator=(this + 1, a2 + 1);
  this[8] = a2[8];
  return this;
}
