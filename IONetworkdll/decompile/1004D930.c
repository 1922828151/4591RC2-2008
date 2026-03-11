/*
 * func-name: sub_1004D930
 * func-address: 0x1004d930
 * callers: none
 * callees: 0x1004c0d0
 */

void __thiscall sub_1004D930(int this, int a2, int a3, int a4, int a5)
{
  *(_DWORD *)(this + 48) = a3;
  *(_DWORD *)(this + 52) = a5;
  *(_DWORD *)(this + 24) = a2;
  *(_DWORD *)(this + 28) = a4;
  Outpop::IONetwork::P2PUdpBuilder::handle_read_stream(*(volatile LONG **)(this + 56), (struct in_addr *)this);
}
