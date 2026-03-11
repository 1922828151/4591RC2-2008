/*
 * func-name: ??4CryptProv@IONetwork@Outpop@@QAEAAV012@ABV012@@Z
 * func-address: 0x10001990
 * callers: none
 * callees: none
 */

_DWORD *__thiscall Outpop::IONetwork::CryptProv::operator=(_DWORD *this, _DWORD *a2)
{
  _DWORD *result; // eax

  result = this;
  *this = *a2;
  this[1] = a2[1];
  this[2] = a2[2];
  return result;
}
