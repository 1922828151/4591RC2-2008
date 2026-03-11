/*
 * func-name: ?instance@Default_Allocator@Utility@Outpop@@SAPAV123@XZ
 * func-address: 0x10014c80
 * callers: 0x100175f0
 * callees: 0x10014d20, 0x100178b0, 0x10018e10
 */

struct Outpop::Utility::Default_Allocator *__cdecl Outpop::Utility::Default_Allocator::instance()
{
  struct Outpop::Utility::Default_Allocator *result; // eax

  result = Outpop::Utility::Default_Allocator::g_allocator;
  if ( !Outpop::Utility::Default_Allocator::g_allocator )
  {
    EnterCriticalSection(&Outpop::Utility::Singleton_Manager::g_singleton_lock_);
    if ( !Outpop::Utility::Default_Allocator::g_allocator )
    {
      Outpop::Utility::Default_Allocator::g_allocator = (struct Outpop::Utility::Default_Allocator *)operator new(1u);
      Outpop::Utility::Singleton_Manager::instance();
      sub_10014D20();
    }
    LeaveCriticalSection(&Outpop::Utility::Singleton_Manager::g_singleton_lock_);
    return Outpop::Utility::Default_Allocator::g_allocator;
  }
  return result;
}
