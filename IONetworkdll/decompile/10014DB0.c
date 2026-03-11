/*
 * func-name: sub_10014DB0
 * func-address: 0x10014db0
 * callers: none
 * callees: 0x10014630
 */

void __thiscall sub_10014DB0(int this, int a2, int a3, int a4, int a5)
{
  Outpop::IONetwork::Stream_Channel::handle_time_result(
    *(Outpop::IONetwork::Stream_Channel **)(this + 28),
    (struct Outpop::IONetwork::Asynch_Result *)this);
}
