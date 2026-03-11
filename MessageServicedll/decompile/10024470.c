/*
 * func-name: ??0Synch_Ack_Handler@Message@Outpop@@QAE@AAVRequest_Ack@12@@Z
 * func-address: 0x10024470
 * callers: 0x100052a0
 * callees: none
 */

Outpop::Message::Synch_Ack_Handler *__thiscall Outpop::Message::Synch_Ack_Handler::Synch_Ack_Handler(
        Outpop::Message::Synch_Ack_Handler *this,
        struct Outpop::Message::Request_Ack *a2)
{
  Outpop::Message::Synch_Ack_Handler *result; // eax

  result = this;
  *(_DWORD *)this = &Outpop::Message::Message_Handler::`vftable';
  *(_DWORD *)this = &Outpop::Message::Synch_Ack_Handler::`vftable';
  *((_DWORD *)this + 1) = a2;
  return result;
}
