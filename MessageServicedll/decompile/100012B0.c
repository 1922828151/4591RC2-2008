/*
 * func-name: ?get_synch_ack_handler@Context@Message@Outpop@@QAEAAVSynch_Ack_Handler@23@XZ
 * func-address: 0x100012b0
 * callers: none
 * callees: none
 */

struct Outpop::Message::Synch_Ack_Handler *__thiscall Outpop::Message::Context::get_synch_ack_handler(
        Outpop::Message::Context *this)
{
  return (struct Outpop::Message::Synch_Ack_Handler *)*((_DWORD *)this + 17);
}
