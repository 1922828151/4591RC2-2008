/*
 * func-name: ??0Message_Connector_Config@Message@Outpop@@QAE@ABU012@@Z
 * func-address: 0x100010b0
 * callers: 0x1000c280, 0x10015230, 0x10016160
 * callees: none
 */

Outpop::Message::Message_Connector_Config *__thiscall Outpop::Message::Message_Connector_Config::Message_Connector_Config(
        Outpop::Message::Message_Connector_Config *this,
        const struct Outpop::Message::Message_Connector_Config *a2)
{
  Outpop::IONetwork::Connector_Config::Connector_Config(this, a2);
  *((_BYTE *)this + 96) = *((_BYTE *)a2 + 96);
  *((_DWORD *)this + 25) = *((_DWORD *)a2 + 25);
  return this;
}
