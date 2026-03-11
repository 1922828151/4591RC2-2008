/*
 * func-name: sub_100346B0
 * func-address: 0x100346b0
 * callers: none
 * callees: 0x10031df0
 */

int __thiscall sub_100346B0(int this, int a2, int a3, int a4, int a5)
{
  return Outpop::IONetwork::Dgram_Channel::handle_time_result(
           *(Outpop::IONetwork::Dgram_Channel **)(this + 28),
           (struct Outpop::IONetwork::Asynch_Result *)this);
}
