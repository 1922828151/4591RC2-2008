/*
 * func-name: ??0Singleton_Manager@Utility@Outpop@@QAE@XZ
 * func-address: 0x10017750
 * callers: 0x100178b0
 * callees: 0x10007360
 */

Outpop::Utility::Singleton_Manager *__thiscall Outpop::Utility::Singleton_Manager::Singleton_Manager(
        Outpop::Utility::Singleton_Manager *this)
{
  *((_DWORD *)this + 1) = sub_10007360();
  *((_DWORD *)this + 2) = 0;
  return this;
}
