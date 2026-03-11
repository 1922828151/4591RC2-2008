/*
 * func-name: ??0Quit_Process@Utility@Outpop@@QAE@ABV012@@Z
 * func-address: 0x10003b60
 * callers: none
 * callees: none
 */

Outpop::Utility::Quit_Process *__thiscall Outpop::Utility::Quit_Process::Quit_Process(
        Outpop::Utility::Quit_Process *this,
        const struct Outpop::Utility::Quit_Process *a2)
{
  Outpop::Utility::Quit_Process *result; // eax

  result = this;
  *(_DWORD *)this = &Outpop::Utility::Ref_Object::`vftable';
  *((_DWORD *)this + 1) = 0;
  *(_DWORD *)this = &Outpop::Utility::Thread_Message::`vftable';
  *(_DWORD *)this = &Outpop::Utility::Quit_Process::`vftable';
  return result;
}
