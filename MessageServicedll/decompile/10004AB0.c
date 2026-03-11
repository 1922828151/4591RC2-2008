/*
 * func-name: ??0Synch_Ack_Handler@Message@Outpop@@QAE@ABV012@@Z
 * func-address: 0x10004ab0
 * callers: none
 * callees: none
 */

Outpop::Message::Synch_Ack_Handler *__thiscall Outpop::Message::Synch_Ack_Handler::Synch_Ack_Handler(
        Outpop::Message::Synch_Ack_Handler *this,
        const struct Outpop::Message::Synch_Ack_Handler *a2)
{
  Outpop::Message::Synch_Ack_Handler *result; // eax

  result = this;
  *(_DWORD *)this = &Outpop::Message::Message_Handler::`vftable';
  *(_DWORD *)this = &Outpop::Message::Synch_Ack_Handler::`vftable';
  *((_DWORD *)this + 1) = *((_DWORD *)a2 + 1);
  return result;
}
