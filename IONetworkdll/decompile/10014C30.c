/*
 * func-name: sub_10014C30
 * func-address: 0x10014c30
 * callers: none
 * callees: 0x10013430
 */

void __thiscall sub_10014C30(int this, int a2, int a3, int a4, int a5)
{
  *(_DWORD *)(this + 36) = a3;
  *(_DWORD *)(this + 44) = a5;
  *(_DWORD *)(this + 24) = a2;
  *(_DWORD *)(this + 28) = a4;
  Outpop::IONetwork::Stream_Channel::handle_write_stream(
    *(Outpop::IONetwork::Stream_Channel **)(this + 48),
    (struct Outpop::IONetwork::Asynch_IO_Result *)this);
}
