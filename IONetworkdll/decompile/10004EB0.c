/*
 * func-name: ??4Connector@IONetwork@Outpop@@QAEAAV012@ABV012@@Z
 * func-address: 0x10004eb0
 * callers: none
 * callees: 0x100046e0
 */

_DWORD *__thiscall Outpop::IONetwork::Connector::operator=(_DWORD *this, _DWORD *a2)
{
  if ( this != a2 )
    this[1] = 0;
  this[2] = a2[2];
  Outpop::IONetwork::Connector_Config::operator=((int)(this + 3), (int)(a2 + 3));
  this[27] = a2[27];
  this[28] = a2[28];
  return this;
}
