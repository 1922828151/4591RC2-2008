/*
 * func-name: sub_1002B810
 * func-address: 0x1002b810
 * callers: none
 * callees: 0x10028900
 */

void __thiscall sub_1002B810(int this, int a2, int a3, int a4, int a5)
{
  *(_DWORD *)(this + 68) = a3;
  *(_DWORD *)(this + 76) = a5;
  *(_DWORD *)(this + 24) = a2;
  *(_DWORD *)(this + 28) = a4;
  Outpop::IONetwork::Dgram_Acceptor::handle_write_stream(
    *(Outpop::IONetwork::Dgram_Acceptor **)(this + 80),
    (struct Outpop::IONetwork::Asynch_IO_Result *)this);
}
