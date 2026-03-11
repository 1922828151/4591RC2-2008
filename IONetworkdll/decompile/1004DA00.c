/*
 * func-name: sub_1004DA00
 * func-address: 0x1004da00
 * callers: none
 * callees: 0x1004c7b0
 */

void __thiscall sub_1004DA00(int this, int a2, int a3, int a4, int a5)
{
  *(_DWORD *)(this + 68) = a3;
  *(_DWORD *)(this + 76) = a5;
  *(_DWORD *)(this + 24) = a2;
  *(_DWORD *)(this + 28) = a4;
  Outpop::IONetwork::P2PUdpBuilder::handle_write_stream(
    *(Outpop::IONetwork::P2PUdpBuilder **)(this + 80),
    (struct Outpop::IONetwork::Asynch_IO_Result *)this);
}
