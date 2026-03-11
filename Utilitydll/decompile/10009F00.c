/*
 * func-name: ??4access_violation@Utility@Outpop@@QAEAAV012@ABV012@@Z
 * func-address: 0x10009f00
 * callers: none
 * callees: none
 */

_DWORD *__thiscall Outpop::Utility::access_violation::operator=(_DWORD *this, _DWORD *a2)
{
  std::exception::operator=(a2);
  this[3] = a2[3];
  this[4] = a2[4];
  this[5] = a2[5];
  this[6] = a2[6];
  this[7] = a2[7];
  return this;
}
