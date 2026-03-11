/*
 * func-name: ?get_handler_manager@Context@Message@Outpop@@QAEAAVHandler_Manager@23@XZ
 * func-address: 0x100063a0
 * callers: none
 * callees: none
 */

struct Outpop::Message::Handler_Manager *__thiscall Outpop::Message::Context::get_handler_manager(
        Outpop::Message::Context *this)
{
  return (struct Outpop::Message::Handler_Manager *)*((_DWORD *)this + 12);
}
