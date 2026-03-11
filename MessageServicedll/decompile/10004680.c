/*
 * func-name: ??0Request_Handler@Message@Outpop@@QAE@ABV012@@Z
 * func-address: 0x10004680
 * callers: none
 * callees: none
 */

Outpop::Message::Request_Handler *__thiscall Outpop::Message::Request_Handler::Request_Handler(
        Outpop::Message::Request_Handler *this,
        const struct Outpop::Message::Request_Handler *a2)
{
  Outpop::Message::Request_Handler *result; // eax

  result = this;
  *(_DWORD *)this = &Outpop::Message::Message_Handler::`vftable';
  *(_DWORD *)this = &Outpop::Message::Request_Handler::`vftable';
  *((_DWORD *)this + 1) = *((_DWORD *)a2 + 1);
  *((_DWORD *)this + 2) = *((_DWORD *)a2 + 2);
  *((_DWORD *)this + 3) = *((_DWORD *)a2 + 3);
  *((_DWORD *)this + 4) = *((_DWORD *)a2 + 4);
  return result;
}
