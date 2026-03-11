/*
 * func-name: ??1Connector@IONetwork@Outpop@@UAE@XZ
 * func-address: 0x10004d20
 * callers: 0x10004ef0, 0x1001da60, 0x1001dcb0, 0x1001dd60, 0x1002c790, 0x10036040, 0x10036650, 0x100367a0
 * callees: 0x100045b0
 */

void __thiscall Outpop::IONetwork::Connector::~Connector(Outpop::IONetwork::Connector *this)
{
  *(_DWORD *)this = &Outpop::IONetwork::Connector::`vftable';
  Outpop::IONetwork::Connector_Config::~Connector_Config((Outpop::IONetwork::Connector *)((char *)this + 12));
  Outpop::Utility::Timer_Handler::~Timer_Handler(this);
}
