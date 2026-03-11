/*
 * func-name: ?instance@Timer_Queue@Utility@Outpop@@SAPAV123@XZ
 * func-address: 0x100040d0
 * callers: none
 * callees: 0x10003e80, 0x10008080, 0x100178b0, 0x10018e10
 */

struct Outpop::Utility::Timer_Queue *__cdecl Outpop::Utility::Timer_Queue::instance()
{
  struct Outpop::Utility::Timer_Queue *result; // eax
  Outpop::Utility::Timer_Queue *v1; // eax
  struct Outpop::Utility::Timer_Queue *v2; // eax

  result = Outpop::Utility::Timer_Queue::g_timer_queue_;
  if ( !Outpop::Utility::Timer_Queue::g_timer_queue_ )
  {
    EnterCriticalSection(&Outpop::Utility::Singleton_Manager::g_singleton_lock_);
    if ( !Outpop::Utility::Timer_Queue::g_timer_queue_ )
    {
      v1 = (Outpop::Utility::Timer_Queue *)operator new(0xB8u);
      if ( v1 )
        v2 = Outpop::Utility::Timer_Queue::Timer_Queue(v1);
      else
        v2 = 0;
      Outpop::Utility::Timer_Queue::g_timer_queue_ = v2;
      Outpop::Utility::Singleton_Manager::instance();
      sub_10008080();
    }
    LeaveCriticalSection(&Outpop::Utility::Singleton_Manager::g_singleton_lock_);
    return Outpop::Utility::Timer_Queue::g_timer_queue_;
  }
  return result;
}
