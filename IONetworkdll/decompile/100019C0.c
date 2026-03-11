/*
 * func-name: ??4Crypto_Aes@IONetwork@Outpop@@QAEAAV012@ABV012@@Z
 * func-address: 0x100019c0
 * callers: none
 * callees: none
 */

_DWORD *__thiscall Outpop::IONetwork::Crypto_Aes::operator=(_DWORD *this, _DWORD *a2)
{
  _DWORD *result; // eax

  result = this;
  *this = *a2;
  this[1] = a2[1];
  return result;
}
