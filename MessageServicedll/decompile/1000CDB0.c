/*
 * func-name: ?send_message@Message_Facade@Message@Outpop@@SAXHAAV?$vector@V?$Smart_Ptr@VMessage@1Outpop@@@Utility@Outpop@@V?$allocator@V?$Smart_Ptr@VMessage@1Outpop@@@Utility@Outpop@@@std@@@std@@@Z
 * func-address: 0x1000cdb0
 * callers: none
 * callees: 0x100211a0
 */

int __cdecl Outpop::Message::Message_Facade::send_message(int a1, int a2)
{
  return Outpop::Message::Message_Sender::send(a1, a2);
}
