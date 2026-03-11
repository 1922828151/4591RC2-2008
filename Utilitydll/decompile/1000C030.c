/*
 * func-name: ??0Manual_Event@Utility@Outpop@@QAE@PAX@Z
 * func-address: 0x1000c030
 * callers: none
 * callees: none
 */

Outpop::Utility::Manual_Event *__thiscall Outpop::Utility::Manual_Event::Manual_Event(
        Outpop::Utility::Manual_Event *this,
        void *a2)
{
  Outpop::Utility::Manual_Event *result; // eax

  result = this;
  *(_DWORD *)this = a2;
  return result;
}
