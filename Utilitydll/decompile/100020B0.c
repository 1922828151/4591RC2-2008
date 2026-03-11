/*
 * func-name: ??0Singleton_Holder@Utility@Outpop@@QAE@XZ
 * func-address: 0x100020b0
 * callers: none
 * callees: none
 */

Outpop::Utility::Singleton_Holder *__thiscall Outpop::Utility::Singleton_Holder::Singleton_Holder(
        Outpop::Utility::Singleton_Holder *this)
{
  Outpop::Utility::Singleton_Holder *result; // eax

  result = this;
  *(_DWORD *)this = &Outpop::Utility::Singleton_Holder::`vftable';
  return result;
}
