/*
 * func-name: sub_10016750
 * func-address: 0x10016750
 * callers: none
 * callees: 0x100294f2
 */

Outpop::Utility::Timer_Handler *__thiscall sub_10016750(Outpop::Utility::Timer_Handler *this, char a2)
{
  *(_DWORD *)this = &Outpop::Message::Re_Connect_Handler::`vftable';
  Outpop::Utility::Timer_Handler::~Timer_Handler(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
