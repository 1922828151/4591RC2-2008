/*
 * func-name: sub_1002B740
 * func-address: 0x1002b740
 * callers: none
 * callees: 0x10027c50
 */

void __thiscall sub_1002B740(int this, int a2, int a3, int a4, int a5)
{
  *(_DWORD *)(this + 48) = a3;
  *(_DWORD *)(this + 52) = a5;
  *(_DWORD *)(this + 24) = a2;
  *(_DWORD *)(this + 28) = a4;
  Outpop::IONetwork::Dgram_Acceptor::handle_read_stream(
    *(volatile LONG **)(this + 56),
    (struct Outpop::IONetwork::Asynch_IO_Result *)this);
}
