/*
 * func-name: ?disable_ra_time_out@Request_Ack@Message@Outpop@@QAEXXZ
 * func-address: 0x100048f0
 * callers: none
 * callees: none
 */

void __thiscall Outpop::Message::Request_Ack::disable_ra_time_out(Outpop::Message::Request_Ack *this)
{
  *((_BYTE *)this + 164) = 0;
}
