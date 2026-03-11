/*
 * func-name: ?get_channel_manager@Context@Message@Outpop@@QAEAAVChannel_Manager@23@XZ
 * func-address: 0x10006350
 * callers: none
 * callees: none
 */

struct Outpop::Message::Channel_Manager *__thiscall Outpop::Message::Context::get_channel_manager(
        Outpop::Message::Context *this)
{
  return (struct Outpop::Message::Channel_Manager *)*((_DWORD *)this + 8);
}
