/*
 * func-name: ?post@WIN32_IoCompletionPort@IONetwork@Outpop@@QAEHPAVAsynch_Result@23@PAX@Z
 * func-address: 0x10003bf0
 * callers: 0x10014270, 0x10031810
 * callees: none
 */

int __thiscall Outpop::IONetwork::WIN32_IoCompletionPort::post(
        HANDLE *this,
        struct Outpop::IONetwork::Asynch_Result *a2,
        ULONG_PTR dwCompletionKey)
{
  return PostQueuedCompletionStatus(*this, *((_DWORD *)a2 + 6), dwCompletionKey, (LPOVERLAPPED)((char *)a2 + 4)) - 1;
}
