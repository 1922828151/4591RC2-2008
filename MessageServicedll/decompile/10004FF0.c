/*
 * func-name: ?get_event_type@Remote_Event_Stub@Message@Outpop@@QAEGXZ
 * func-address: 0x10004ff0
 * callers: none
 * callees: none
 */

unsigned __int16 __thiscall Outpop::Message::Remote_Event_Stub::get_event_type(
        Outpop::Message::Remote_Event_Stub *this)
{
  return *((_WORD *)this + 3);
}
