/*
 * func-name: sub_10019280
 * func-address: 0x10019280
 * callers: none
 * callees: 0x10017730
 */

void __thiscall sub_10019280(int this, int a2, int a3, int a4, int a5)
{
  *(_DWORD *)(this + 56) = a3;
  *(_DWORD *)(this + 48) = a5;
  *(_DWORD *)(this + 24) = a2;
  *(_DWORD *)(this + 28) = a4;
  Outpop::IONetwork::Stream_Acceptor::handle_accept(
    *(Outpop::IONetwork::Stream_Acceptor **)(this + 52),
    (struct Outpop::IONetwork::Asynch_IO_Result *)this);
}
