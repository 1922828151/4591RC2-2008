/*
 * func-name: ?run_event_loop@WIN32_IoCompletionPort@IONetwork@Outpop@@QAEHXZ
 * func-address: 0x10003dc0
 * callers: none
 * callees: 0x10003c30, 0x10003cf0
 */

int __thiscall Outpop::IONetwork::WIN32_IoCompletionPort::run_event_loop(
        Outpop::IONetwork::WIN32_IoCompletionPort *this)
{
  Outpop::Utility::Thread_Mutex *v2; // edi

  v2 = (Outpop::IONetwork::WIN32_IoCompletionPort *)((char *)this + 12);
  if ( Outpop::Utility::Thread_Mutex::acquire((Outpop::IONetwork::WIN32_IoCompletionPort *)((char *)this + 12)) )
  {
    if ( *((_DWORD *)this + 1) )
    {
LABEL_10:
      Outpop::Utility::Thread_Mutex::release(v2);
      return 0;
    }
    ++*((_DWORD *)this + 2);
    Outpop::Utility::Thread_Mutex::release(v2);
    if ( !*((_DWORD *)this + 1) )
    {
      while ( Outpop::IONetwork::WIN32_IoCompletionPort::handle_events((void **)this, 0xFFFFFFFF) != -1
           && !*((_DWORD *)this + 1) )
        ;
    }
    if ( Outpop::Utility::Thread_Mutex::acquire(v2) )
    {
      if ( (int)--*((_DWORD *)this + 2) > 0 )
      {
        if ( *((_DWORD *)this + 1) )
          Outpop::IONetwork::WIN32_IoCompletionPort::proactor_post_wakeup_completions((HANDLE *)this, 1);
      }
      goto LABEL_10;
    }
  }
  return -1;
}
