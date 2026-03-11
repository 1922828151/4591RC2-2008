/*
 * func-name: ??0Connector@IONetwork@Outpop@@QAE@XZ
 * func-address: 0x10004ca0
 * callers: 0x1001dcb0, 0x10036040, 0x10036650
 * callees: 0x10004500
 */

Outpop::IONetwork::Connector *__thiscall Outpop::IONetwork::Connector::Connector(Outpop::IONetwork::Connector *this)
{
  Outpop::Utility::Timer_Handler::Timer_Handler(this);
  *(_DWORD *)this = &Outpop::IONetwork::Connector::`vftable';
  *((_DWORD *)this + 2) = 0;
  Outpop::IONetwork::Connector_Config::Connector_Config((Outpop::IONetwork::Connector *)((char *)this + 12));
  *((_DWORD *)this + 27) = 0;
  return this;
}
