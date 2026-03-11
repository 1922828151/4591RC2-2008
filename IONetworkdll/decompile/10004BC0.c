/*
 * func-name: ??4Acceptor@IONetwork@Outpop@@QAEAAV012@ABV012@@Z
 * func-address: 0x10004bc0
 * callers: 0x10016d50, 0x10026040
 * callees: 0x10004480
 */

_DWORD *__thiscall Outpop::IONetwork::Acceptor::operator=(_DWORD *this, _DWORD *a2)
{
  if ( this != a2 )
    this[1] = 0;
  Outpop::IONetwork::Acceptor_Config::operator=((int)(this + 2), (int)(a2 + 2));
  this[31] = a2[31];
  this[32] = a2[32];
  this[33] = a2[33];
  this[34] = a2[34];
  this[35] = a2[35];
  this[36] = a2[36];
  this[37] = a2[37];
  this[38] = a2[38];
  return this;
}
