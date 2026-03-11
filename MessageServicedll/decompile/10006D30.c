/*
 * func-name: ?enable_request_ack_time_out@Context@Message@Outpop@@QAEXXZ
 * func-address: 0x10006d30
 * callers: none
 * callees: none
 */

void __thiscall Outpop::Message::Context::enable_request_ack_time_out(Outpop::Message::Context *this)
{
  *((_BYTE *)this + 84) = 1;
}
