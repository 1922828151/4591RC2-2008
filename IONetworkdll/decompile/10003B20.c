/*
 * func-name: ?bind@WIN32_IoCompletionPort@IONetwork@Outpop@@QAEHPAX0@Z
 * func-address: 0x10003b20
 * callers: none
 * callees: none
 */

int __thiscall Outpop::IONetwork::WIN32_IoCompletionPort::bind(
        HANDLE *this,
        HANDLE FileHandle,
        ULONG_PTR CompletionKey)
{
  if ( CreateIoCompletionPort(FileHandle, *this, CompletionKey, 0) )
    return 0;
  else
    return -(GetLastError() != 87);
}
