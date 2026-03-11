/*
 * func-name: ?end_event_loop@WIN32_IoCompletionPort@IONetwork@Outpop@@QAEHXZ
 * func-address: 0x10003ee0
 * callers: none
 * callees: 0x10003cf0
 */

int __thiscall Outpop::IONetwork::WIN32_IoCompletionPort::end_event_loop(
        Outpop::IONetwork::WIN32_IoCompletionPort *this)
{
  Outpop::Utility::Thread_Mutex *v2; // edi
  int result; // eax
  int v4; // ebx
  int v5; // [esp+14h] [ebp-10h]

  v2 = (Outpop::IONetwork::WIN32_IoCompletionPort *)((char *)this + 12);
  v5 = Outpop::Utility::Thread_Mutex::acquire((Outpop::IONetwork::WIN32_IoCompletionPort *)((char *)this + 12)) - 1;
  result = -1;
  if ( v5 != -1 )
  {
    v4 = *((_DWORD *)this + 2);
    *((_DWORD *)this + 1) = 1;
    Outpop::Utility::Thread_Mutex::release(v2);
    if ( v4 )
      return Outpop::IONetwork::WIN32_IoCompletionPort::proactor_post_wakeup_completions((HANDLE *)this, v4);
    else
      return 0;
  }
  return result;
}
