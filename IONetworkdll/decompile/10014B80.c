/*
 * func-name: sub_10014B80
 * func-address: 0x10014b80
 * callers: none
 * callees: 0x100117b0
 */

void __thiscall sub_10014B80(int this, int a2, int a3, int a4, int a5)
{
  *(_DWORD *)(this + 40) = a3;
  *(_DWORD *)(this + 44) = a5;
  *(_DWORD *)(this + 24) = a2;
  *(_DWORD *)(this + 28) = a4;
  Outpop::IONetwork::Stream_Channel::handle_read_stream(
    *(Outpop::IONetwork::Stream_Channel **)(this + 48),
    (struct Outpop::IONetwork::Asynch_IO_Result *)this);
}
