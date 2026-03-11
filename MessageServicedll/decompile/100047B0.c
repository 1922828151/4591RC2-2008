/*
 * func-name: ??0Asynch_Ack_Handler@Message@Outpop@@QAE@ABV012@@Z
 * func-address: 0x100047b0
 * callers: none
 * callees: none
 */

Outpop::Message::Asynch_Ack_Handler *__thiscall Outpop::Message::Asynch_Ack_Handler::Asynch_Ack_Handler(
        Outpop::Message::Asynch_Ack_Handler *this,
        const struct Outpop::Message::Asynch_Ack_Handler *a2)
{
  Outpop::Message::Asynch_Ack_Handler *result; // eax

  result = this;
  *(_DWORD *)this = &Outpop::Message::Message_Handler::`vftable';
  *(_DWORD *)this = &Outpop::Message::Asynch_Ack_Handler::`vftable';
  *((_DWORD *)this + 1) = *((_DWORD *)a2 + 1);
  *((_DWORD *)this + 2) = *((_DWORD *)a2 + 2);
  *((_DWORD *)this + 3) = *((_DWORD *)a2 + 3);
  *((_DWORD *)this + 4) = *((_DWORD *)a2 + 4);
  return result;
}
