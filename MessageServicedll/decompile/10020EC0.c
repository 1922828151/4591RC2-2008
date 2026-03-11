/*
 * func-name: ??0Message_Sender@Message@Outpop@@QAE@AAVContext@12@@Z
 * func-address: 0x10020ec0
 * callers: 0x100052a0
 * callees: none
 */

Outpop::Message::Message_Sender *__thiscall Outpop::Message::Message_Sender::Message_Sender(
        Outpop::Message::Message_Sender *this,
        struct Outpop::Message::Context *a2)
{
  Outpop::Message::Message_Sender *result; // eax

  result = this;
  *((_DWORD *)this + 1) = 0;
  *((_DWORD *)this + 2) = 0;
  *((_DWORD *)this + 3) = 0;
  *((_DWORD *)this + 4) = a2;
  return result;
}
