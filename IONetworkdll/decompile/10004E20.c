/*
 * func-name: ??0Connector@IONetwork@Outpop@@QAE@ABV012@@Z
 * func-address: 0x10004e20
 * callers: 0x1001da60, 0x1002c790
 * callees: 0x10004630
 */

Outpop::IONetwork::Connector *__thiscall Outpop::IONetwork::Connector::Connector(
        Outpop::IONetwork::Connector *this,
        Outpop::Utility::Ref_Object **a2)
{
  Outpop::Utility::Timer_Handler::Timer_Handler(this, (const struct Outpop::Utility::Timer_Handler *)a2);
  *(_DWORD *)this = &Outpop::IONetwork::Connector::`vftable';
  *((_DWORD *)this + 2) = a2[2];
  Outpop::IONetwork::Connector_Config::Connector_Config((Outpop::IONetwork::Connector *)((char *)this + 12), a2 + 3);
  *((_DWORD *)this + 27) = a2[27];
  *((_DWORD *)this + 28) = a2[28];
  return this;
}
