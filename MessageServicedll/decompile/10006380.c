/*
 * func-name: ?get_message_sender@Context@Message@Outpop@@QAEAAVMessage_Sender@23@XZ
 * func-address: 0x10006380
 * callers: none
 * callees: none
 */

struct Outpop::Message::Message_Sender *__thiscall Outpop::Message::Context::get_message_sender(
        Outpop::Message::Context *this)
{
  return (struct Outpop::Message::Message_Sender *)*((_DWORD *)this + 10);
}
