/*
 * func-name: ??4Message_Connector_Config@Message@Outpop@@QAEAAU012@ABU012@@Z
 * func-address: 0x10001120
 * callers: none
 * callees: none
 */

int __thiscall Outpop::Message::Message_Connector_Config::operator=(int this, int a2)
{
  Outpop::IONetwork::Connector_Config::operator=(a2);
  *(_BYTE *)(this + 96) = *(_BYTE *)(a2 + 96);
  *(_DWORD *)(this + 100) = *(_DWORD *)(a2 + 100);
  return this;
}
