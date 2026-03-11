/*
 * func-name: ?instance@Singleton_Manager@Utility@Outpop@@SAPAV123@XZ
 * func-address: 0x100178b0
 * callers: 0x10002410, 0x100040d0, 0x1000e110, 0x100121f0, 0x10014c80, 0x10017870
 * callees: 0x10017750, 0x10018e10
 */

struct Outpop::Utility::Singleton_Manager *__cdecl Outpop::Utility::Singleton_Manager::instance()
{
  struct Outpop::Utility::Singleton_Manager *result; // eax
  Outpop::Utility::Singleton_Manager *v1; // eax
  Outpop::Utility::Singleton_Manager *v2; // eax

  result = Outpop::Utility::Singleton_Manager::g_singleton_manager_;
  if ( !Outpop::Utility::Singleton_Manager::g_singleton_manager_ )
  {
    EnterCriticalSection(&Outpop::Utility::Singleton_Manager::g_singleton_lock_);
    if ( !Outpop::Utility::Singleton_Manager::g_singleton_manager_ )
    {
      v1 = (Outpop::Utility::Singleton_Manager *)operator new(0xCu);
      if ( v1 )
        v2 = Outpop::Utility::Singleton_Manager::Singleton_Manager(v1);
      else
        v2 = 0;
      Outpop::Utility::Singleton_Manager::g_singleton_manager_ = v2;
    }
    LeaveCriticalSection(&Outpop::Utility::Singleton_Manager::g_singleton_lock_);
    return Outpop::Utility::Singleton_Manager::g_singleton_manager_;
  }
  return result;
}
