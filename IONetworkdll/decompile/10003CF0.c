/*
 * func-name: ?proactor_post_wakeup_completions@WIN32_IoCompletionPort@IONetwork@Outpop@@QAEHH@Z
 * func-address: 0x10003cf0
 * callers: 0x10003dc0, 0x10003ee0
 * callees: 0x1004e98e
 */

int __thiscall Outpop::IONetwork::WIN32_IoCompletionPort::proactor_post_wakeup_completions(HANDLE *this, int a2)
{
  int result; // eax
  int v4; // ebp
  int v5; // eax

  result = 0;
  v4 = 0;
  if ( a2 > 0 )
  {
    while ( 1 )
    {
      v5 = operator new(28);
      if ( v5 )
      {
        *(_DWORD *)v5 = &Outpop::IONetwork::Asynch_Result::`vftable';
        *(_DWORD *)(v5 + 24) = 0;
        *(_DWORD *)(v5 + 20) = 0;
        *(_DWORD *)(v5 + 4) = 0;
        *(_DWORD *)(v5 + 8) = 0;
        *(_DWORD *)(v5 + 16) = 0;
        *(_DWORD *)(v5 + 12) = 0;
        *(_DWORD *)v5 = &Outpop::IONetwork::Asynch_WakeUp_Result::`vftable';
      }
      else
      {
        v5 = 0;
      }
      if ( !PostQueuedCompletionStatus(*this, *(_DWORD *)(v5 + 24), 0, (LPOVERLAPPED)(v5 + 4)) )
        break;
      if ( ++v4 >= a2 )
        return 0;
    }
    return -1;
  }
  return result;
}
