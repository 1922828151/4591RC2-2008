/*
 * func-name: ??0Message_Sender@Message@Outpop@@QAE@ABV012@@Z
 * func-address: 0x10003fa0
 * callers: none
 * callees: 0x1001d600
 */

Outpop::Message::Message_Sender *__thiscall Outpop::Message::Message_Sender::Message_Sender(
        Outpop::Message::Message_Sender *this,
        const struct Outpop::Message::Message_Sender *a2)
{
  sub_1001D600(this);
  *((_DWORD *)this + 4) = *((_DWORD *)a2 + 4);
  return this;
}
