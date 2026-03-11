/*
 * func-name: ??0Thread_Message@Utility@Outpop@@QAE@XZ
 * func-address: 0x10002a40
 * callers: none
 * callees: none
 */

Outpop::Utility::Thread_Message *__thiscall Outpop::Utility::Thread_Message::Thread_Message(
        Outpop::Utility::Thread_Message *this)
{
  Outpop::Utility::Thread_Message *result; // eax

  result = this;
  *(_DWORD *)this = &Outpop::Utility::Ref_Object::`vftable';
  *((_DWORD *)this + 1) = 0;
  *(_DWORD *)this = &Outpop::Utility::Thread_Message::`vftable';
  return result;
}
