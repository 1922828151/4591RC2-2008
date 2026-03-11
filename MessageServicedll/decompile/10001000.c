/*
 * func-name: ??0Message_Connector_Config@Message@Outpop@@QAE@XZ
 * func-address: 0x10001000
 * callers: 0x10001610, 0x1000d690, 0x1000d7c0, 0x1000d8f0, 0x1000da40, 0x10014030
 * callees: none
 */

Outpop::Message::Message_Connector_Config *__thiscall Outpop::Message::Message_Connector_Config::Message_Connector_Config(
        Outpop::Message::Message_Connector_Config *this)
{
  Outpop::IONetwork::Connector_Config::Connector_Config(this);
  *((_BYTE *)this + 96) = 0;
  *((_DWORD *)this + 25) = 0;
  return this;
}
