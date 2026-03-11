/*
 * func-name: ?SetTransport@CPowerTransportUI@@QAEXPAVFunc_Power@GameClient@@0@Z_0
 * func-address: 0x10279270
 * callers: 0x1000a277
 * callees: none
 */

void __thiscall CPowerTransportUI::SetTransport(
        CPowerTransportUI *this,
        struct GameClient::Func_Power *a2,
        struct GameClient::Func_Power *a3)
{
  *((_DWORD *)this + 968) = *((_DWORD *)a3 + 8);
}
