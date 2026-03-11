/*
 * func-name: ?instance@Config@Utility@Outpop@@SAPAV123@XZ
 * func-address: 0x100121f0
 * callers: none
 * callees: 0x100144b0, 0x100178b0, 0x10018e10
 */

struct Outpop::Utility::Config *__cdecl Outpop::Utility::Config::instance()
{
  struct Outpop::Utility::Config *result; // eax

  result = Outpop::Utility::Config::g_config_;
  if ( !Outpop::Utility::Config::g_config_ )
  {
    EnterCriticalSection(&Outpop::Utility::Singleton_Manager::g_singleton_lock_);
    if ( !Outpop::Utility::Config::g_config_ )
    {
      Outpop::Utility::Config::g_config_ = (struct Outpop::Utility::Config *)operator new(1u);
      Outpop::Utility::Singleton_Manager::instance();
      sub_100144B0();
    }
    LeaveCriticalSection(&Outpop::Utility::Singleton_Manager::g_singleton_lock_);
    return Outpop::Utility::Config::g_config_;
  }
  return result;
}
