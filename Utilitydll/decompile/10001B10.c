/*
 * func-name: ??0Timer_Handler@Utility@Outpop@@QAE@XZ
 * func-address: 0x10001b10
 * callers: none
 * callees: none
 */

Outpop::Utility::Timer_Handler *__thiscall Outpop::Utility::Timer_Handler::Timer_Handler(
        Outpop::Utility::Timer_Handler *this)
{
  Outpop::Utility::Timer_Handler *result; // eax

  result = this;
  *(_DWORD *)this = &Outpop::Utility::Ref_Object::`vftable';
  *((_DWORD *)this + 1) = 0;
  *(_DWORD *)this = &Outpop::Utility::Timer_Handler::`vftable';
  return result;
}
