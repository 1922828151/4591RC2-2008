/*
 * func-name: ??4Addr@IONetwork@Outpop@@QAEAAV012@ABV012@@Z
 * func-address: 0x10002210
 * callers: none
 * callees: none
 */

_DWORD *__thiscall Outpop::IONetwork::Addr::operator=(_DWORD *this, int a2)
{
  _DWORD *result; // eax

  result = this;
  this[1] = *(_DWORD *)(a2 + 4);
  this[2] = *(_DWORD *)(a2 + 8);
  return result;
}
