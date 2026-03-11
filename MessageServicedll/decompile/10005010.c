/*
 * func-name: ?get_dispatch_thread@Remote_Event_Stub@Message@Outpop@@QAEPAVDispatch_Thread@Utility@3@XZ
 * func-address: 0x10005010
 * callers: none
 * callees: none
 */

struct Outpop::Utility::Dispatch_Thread *__thiscall Outpop::Message::Remote_Event_Stub::get_dispatch_thread(
        Outpop::Message::Remote_Event_Stub *this)
{
  return (struct Outpop::Utility::Dispatch_Thread *)*((_DWORD *)this + 5);
}
