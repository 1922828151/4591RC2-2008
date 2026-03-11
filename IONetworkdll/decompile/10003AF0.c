/*
 * func-name: ?open@WIN32_IoCompletionPort@IONetwork@Outpop@@QAEHPAX@Z
 * func-address: 0x10003af0
 * callers: none
 * callees: none
 */

int __thiscall Outpop::IONetwork::WIN32_IoCompletionPort::open(
        Outpop::IONetwork::WIN32_IoCompletionPort *this,
        ULONG_PTR CompletionKey)
{
  HANDLE IoCompletionPort; // eax

  IoCompletionPort = CreateIoCompletionPort((HANDLE)0xFFFFFFFF, 0, CompletionKey, 0);
  *(_DWORD *)this = IoCompletionPort;
  if ( IoCompletionPort )
    return 0;
  else
    return -(GetLastError() != 87);
}
