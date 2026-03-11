/*
 * func-name: sub_1000C280
 * func-address: 0x1000c280
 * callers: 0x1000c0b0
 * callees: 0x100010b0
 */

_DWORD *__stdcall sub_1000C280(_DWORD *a1, _DWORD *a2)
{
  *a1 = *a2;
  Outpop::Message::Message_Connector_Config::Message_Connector_Config(
    (Outpop::Message::Message_Connector_Config *)(a1 + 1),
    (const struct Outpop::Message::Message_Connector_Config *)(a2 + 1));
  return a1;
}
