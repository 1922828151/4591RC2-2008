/*
 * func-name: ?get_block_thread@Context@Message@Outpop@@QAEAAVDispatch_Thread@Utility@3@XZ
 * func-address: 0x100012d0
 * callers: none
 * callees: none
 */

struct Outpop::Utility::Dispatch_Thread *__thiscall Outpop::Message::Context::get_block_thread(
        Outpop::Message::Context *this)
{
  return (struct Outpop::Utility::Dispatch_Thread *)*((_DWORD *)this + 15);
}
