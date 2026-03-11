/*
 * func-name: ?open@TSocket@IONetwork@Outpop@@QAEHPAXKK@Z
 * func-address: 0x1000d720
 * callers: none
 * callees: none
 */

int __thiscall Outpop::IONetwork::TSocket::open(
        HANDLE *this,
        HANDLE ExistingCompletionPort,
        ULONG_PTR CompletionKey,
        DWORD NumberOfConcurrentThreads)
{
  return (CreateIoCompletionPort(*this, ExistingCompletionPort, CompletionKey, NumberOfConcurrentThreads) != 0) - 1;
}
