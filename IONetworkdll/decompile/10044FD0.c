/*
 * func-name: ?get_is_have_stream@P2P_Channel@IONetwork@Outpop@@UAEXPA_N00@Z
 * func-address: 0x10044fd0
 * callers: none
 * callees: none
 */

char __thiscall Outpop::IONetwork::P2P_Channel::get_is_have_stream(
        Outpop::IONetwork::P2P_Channel *this,
        bool *a2,
        bool *a3,
        bool *a4)
{
  return Outpop::IONetwork::Sequence_Container::get_is_have_stream(
           (Outpop::IONetwork::P2P_Channel *)((char *)this + 428),
           a2,
           a3,
           a4);
}
