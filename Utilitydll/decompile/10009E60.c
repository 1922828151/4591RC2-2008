/*
 * func-name: ??4winsock_error@Utility@Outpop@@QAEAAV012@ABV012@@Z
 * func-address: 0x10009e60
 * callers: none
 * callees: none
 */

_DWORD *__thiscall Outpop::Utility::winsock_error::operator=(_DWORD *this, _DWORD *a2)
{
  std::exception::operator=(a2);
  this[3] = a2[3];
  this[4] = a2[4];
  this[5] = a2[5];
  return this;
}
