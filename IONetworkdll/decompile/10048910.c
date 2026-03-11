/*
 * func-name: sub_10048910
 * func-address: 0x10048910
 * callers: none
 * callees: 0x100455d0
 */

void __thiscall sub_10048910(int this, int a2, int a3, int a4, int a5)
{
  Outpop::IONetwork::P2P_Channel::handle_time_result(
    *(struct in_addr **)(this + 28),
    (struct Outpop::IONetwork::Asynch_Result *)this);
}
