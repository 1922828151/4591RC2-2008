/*
 * func-name: ?instance@Logger@Utility@Outpop@@SAPAV123@XZ
 * func-address: 0x10002410
 * callers: 0x10002f40, 0x10003e80, 0x10004830, 0x1000bb00, 0x1000bc60, 0x1000d0e0, 0x10016070, 0x10016fc0, 0x10018720
 * callees: 0x10008000, 0x10016600, 0x100178b0, 0x10018e10
 */

struct Outpop::Utility::Logger *__cdecl Outpop::Utility::Logger::instance()
{
  struct Outpop::Utility::Logger *result; // eax
  Outpop::Utility::Logger *v1; // eax
  struct Outpop::Utility::Logger *v2; // eax

  result = Outpop::Utility::Logger::g_log_;
  if ( !Outpop::Utility::Logger::g_log_ )
  {
    EnterCriticalSection(&Outpop::Utility::Singleton_Manager::g_singleton_lock_);
    if ( !Outpop::Utility::Logger::g_log_ )
    {
      v1 = (Outpop::Utility::Logger *)operator new(0xACu);
      if ( v1 )
        v2 = (struct Outpop::Utility::Logger *)Outpop::Utility::Logger::Logger(v1);
      else
        v2 = 0;
      Outpop::Utility::Logger::g_log_ = v2;
      Outpop::Utility::Singleton_Manager::instance();
      sub_10008000();
    }
    LeaveCriticalSection(&Outpop::Utility::Singleton_Manager::g_singleton_lock_);
    return Outpop::Utility::Logger::g_log_;
  }
  return result;
}
