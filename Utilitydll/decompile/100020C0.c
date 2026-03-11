/*
 * func-name: ??0Singleton_Holder@Utility@Outpop@@QAE@ABV012@@Z
 * func-address: 0x100020c0
 * callers: none
 * callees: none
 */

Outpop::Utility::Singleton_Holder *__thiscall Outpop::Utility::Singleton_Holder::Singleton_Holder(
        Outpop::Utility::Singleton_Holder *this,
        const struct Outpop::Utility::Singleton_Holder *a2)
{
  Outpop::Utility::Singleton_Holder *result; // eax

  result = this;
  *(_DWORD *)this = &Outpop::Utility::Singleton_Holder::`vftable';
  return result;
}
