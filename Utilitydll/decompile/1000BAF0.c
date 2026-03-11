/*
 * func-name: ??0Event_Base@Utility@Outpop@@QAE@PAX@Z
 * func-address: 0x1000baf0
 * callers: none
 * callees: none
 */

Outpop::Utility::Event_Base *__thiscall Outpop::Utility::Event_Base::Event_Base(
        Outpop::Utility::Event_Base *this,
        void *a2)
{
  Outpop::Utility::Event_Base *result; // eax

  result = this;
  *(_DWORD *)this = a2;
  return result;
}
