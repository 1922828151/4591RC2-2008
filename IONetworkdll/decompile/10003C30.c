/*
 * func-name: ?handle_events@WIN32_IoCompletionPort@IONetwork@Outpop@@QAEHK@Z
 * func-address: 0x10003c30
 * callers: 0x10003c20, 0x10003dc0
 * callees: none
 */

int __thiscall Outpop::IONetwork::WIN32_IoCompletionPort::handle_events(void **this, DWORD dwMilliseconds)
{
  BOOL QueuedCompletionStatus; // eax
  LPOVERLAPPED v3; // edx
  DWORD v4; // eax
  DWORD v6; // ecx
  DWORD LastError; // eax
  char *p_hEvent; // esi
  void *v9; // [esp-14h] [ebp-20h]
  LPOVERLAPPED Overlapped; // [esp+0h] [ebp-Ch] BYREF
  unsigned int CompletionKey; // [esp+4h] [ebp-8h] BYREF
  DWORD NumberOfBytesTransferred; // [esp+8h] [ebp-4h] BYREF

  v9 = *this;
  Overlapped = 0;
  NumberOfBytesTransferred = 0;
  CompletionKey = 0;
  QueuedCompletionStatus = GetQueuedCompletionStatus(
                             v9,
                             &NumberOfBytesTransferred,
                             &CompletionKey,
                             &Overlapped,
                             dwMilliseconds);
  v3 = Overlapped;
  if ( QueuedCompletionStatus || Overlapped )
  {
    v6 = 0;
    if ( !QueuedCompletionStatus )
    {
      LastError = GetLastError();
      v3 = Overlapped;
      v6 = LastError;
    }
    if ( v3 )
      p_hEvent = (char *)&v3[-1].hEvent;
    else
      p_hEvent = 0;
    (*(void (__thiscall **)(char *, DWORD, bool, unsigned int, DWORD))(*(_DWORD *)p_hEvent + 4))(
      p_hEvent,
      NumberOfBytesTransferred,
      v6 == 0,
      CompletionKey,
      v6);
    (**(void (__thiscall ***)(char *, int))p_hEvent)(p_hEvent, 1);
  }
  else
  {
    v4 = GetLastError();
    if ( v4 )
      return v4 != 258 ? -1 : 258;
  }
  return 0;
}
