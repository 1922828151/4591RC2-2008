/*
 * func-name: ??4Network_Option@IONetwork@Outpop@@QAEAAV012@ABV012@@Z
 * func-address: 0x100017e0
 * callers: none
 * callees: none
 */

_DWORD *__thiscall Outpop::IONetwork::Network_Option::operator=(_DWORD *this, _DWORD *a2)
{
  _DWORD *result; // eax

  result = this;
  *this = *a2;
  this[1] = a2[1];
  this[2] = a2[2];
  this[3] = a2[3];
  this[4] = a2[4];
  this[5] = a2[5];
  return result;
}
