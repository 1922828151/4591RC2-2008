/*
 * func-name: ??0Dispatch_Thread_2@Utility@Outpop@@QAE@ABV012@@Z
 * func-address: 0x10003d90
 * callers: none
 * callees: 0x10003c80, 0x10006610
 */

Outpop::Utility::Dispatch_Thread_2 *__thiscall Outpop::Utility::Dispatch_Thread_2::Dispatch_Thread_2(
        Outpop::Utility::Dispatch_Thread_2 *this,
        const struct Outpop::Utility::Dispatch_Thread_2 *a2)
{
  Outpop::Utility::Dispatch_Thread::Dispatch_Thread(this, a2);
  *(_DWORD *)this = &Outpop::Utility::Dispatch_Thread_2::`vftable';
  sub_10006610((char *)this + 164);
  sub_10006610((char *)this + 180);
  return this;
}
