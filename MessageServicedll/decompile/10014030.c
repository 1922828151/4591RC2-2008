/*
 * func-name: sub_10014030
 * func-address: 0x10014030
 * callers: 0x10013940, 0x100141b0, 0x10014890
 * callees: 0x10001000
 */

_DWORD *__stdcall sub_10014030(_DWORD *a1)
{
  Outpop::Utility::Ref_Object::Ref_Object((Outpop::Utility::Ref_Object *)a1);
  *a1 = &Outpop::Message::Connector_Manager::SConnector::`vftable';
  Outpop::Message::Message_Connector_Config::Message_Connector_Config((Outpop::Message::Message_Connector_Config *)(a1 + 2));
  a1[28] = 0;
  return a1;
}
