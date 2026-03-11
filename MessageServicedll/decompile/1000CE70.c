/*
 * func-name: ?synch_request@Message_Facade@Message@Outpop@@SA?AV?$Smart_Ptr@VMessage@1Outpop@@@Utility@3@HAAV453@@Z
 * func-address: 0x1000ce70
 * callers: none
 * callees: 0x10026580
 */

int __cdecl Outpop::Message::Message_Facade::synch_request(int a1, int a2, int a3)
{
  Outpop::Message::Request_Ack::synch_request(a1, a2, a3);
  return a1;
}
