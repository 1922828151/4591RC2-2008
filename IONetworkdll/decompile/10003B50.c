/*
 * func-name: ?close@WIN32_IoCompletionPort@IONetwork@Outpop@@QAEHXZ
 * func-address: 0x10003b50
 * callers: 0x10003a90
 * callees: none
 */

int __thiscall Outpop::IONetwork::WIN32_IoCompletionPort::close(HANDLE *this)
{
  HANDLE v2; // eax
  BOOL QueuedCompletionStatus; // eax
  LPOVERLAPPED i; // ecx
  HANDLE *p_hEvent; // ecx
  HANDLE v7; // [esp-1Ch] [ebp-2Ch]
  LPOVERLAPPED Overlapped; // [esp+4h] [ebp-Ch] BYREF
  unsigned int CompletionKey; // [esp+8h] [ebp-8h] BYREF
  DWORD NumberOfBytesTransferred; // [esp+Ch] [ebp-4h] BYREF

  v2 = *this;
  if ( *this != (HANDLE)-1 )
  {
    Overlapped = 0;
    NumberOfBytesTransferred = 0;
    CompletionKey = 0;
    QueuedCompletionStatus = GetQueuedCompletionStatus(v2, &NumberOfBytesTransferred, &CompletionKey, &Overlapped, 0);
    for ( i = Overlapped; Overlapped; i = Overlapped )
    {
      if ( !QueuedCompletionStatus )
        break;
      if ( i )
      {
        p_hEvent = &i[-1].hEvent;
        if ( p_hEvent )
          (*(void (__thiscall **)(HANDLE *, int))*p_hEvent)(p_hEvent, 1);
      }
      v7 = *this;
      Overlapped = 0;
      NumberOfBytesTransferred = 0;
      CompletionKey = 0;
      QueuedCompletionStatus = GetQueuedCompletionStatus(v7, &NumberOfBytesTransferred, &CompletionKey, &Overlapped, 0);
    }
    CloseHandle(*this);
    *this = (HANDLE)-1;
  }
  return 0;
}
