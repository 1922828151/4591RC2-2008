/*
 * func-name: sub_1001F220
 * func-address: 0x1001f220
 * callers: none
 * callees: 0x1001dec0
 */

void __thiscall sub_1001F220(int this, int a2, int a3, int a4, int a5)
{
  *(_DWORD *)(this + 36) = a3;
  *(_DWORD *)(this + 40) = a5;
  *(_DWORD *)(this + 24) = a2;
  *(_DWORD *)(this + 28) = a4;
  Outpop::IONetwork::Stream_Connector::handle_connect(
    *(Outpop::IONetwork::Stream_Connector **)(this + 44),
    (struct Outpop::IONetwork::Asynch_IO_Result *)this);
}
