/*
 * func-name: ?ParseAddress@Stream_Acceptor@IONetwork@Outpop@@QAEXPAV?$Asynch_IO_Accpet_Result@V?$Smart_Ptr@VStream_Acceptor@IONetwork@Outpop@@@Utility@Outpop@@@23@AAVINET_Addr@23@1I@Z
 * func-address: 0x10018650
 * callers: 0x10017730
 * callees: 0x1004e850, 0x1004f11e
 */

void *__stdcall Outpop::IONetwork::Stream_Acceptor::ParseAddress(
        int a1,
        _DWORD *a2,
        _DWORD *a3,
        DWORD dwReceiveDataLength)
{
  size_t v4; // esi
  void *result; // eax
  size_t v6; // esi
  int LocalSockaddrLength; // [esp+8h] [ebp-10h] BYREF
  struct sockaddr *LocalSockaddr; // [esp+Ch] [ebp-Ch] BYREF
  int RemoteSockaddrLength; // [esp+10h] [ebp-8h] BYREF
  struct sockaddr *RemoteSockaddr; // [esp+14h] [ebp-4h] BYREF

  LocalSockaddr = 0;
  RemoteSockaddr = 0;
  LocalSockaddrLength = 0;
  RemoteSockaddrLength = 0;
  GetAcceptExSockaddrs(
    *(PVOID *)(a1 + 36),
    dwReceiveDataLength,
    0x20u,
    0x20u,
    &LocalSockaddr,
    &LocalSockaddrLength,
    &RemoteSockaddr,
    &RemoteSockaddrLength);
  v4 = LocalSockaddrLength;
  if ( LocalSockaddr->sa_family == 2 )
  {
    if ( LocalSockaddrLength > 16 )
      v4 = 16;
    memcpy(a3 + 3, LocalSockaddr, v4);
    a3[2] = v4;
    a3[1] = 2;
  }
  result = RemoteSockaddr;
  v6 = RemoteSockaddrLength;
  if ( RemoteSockaddr->sa_family == 2 )
  {
    if ( RemoteSockaddrLength > 16 )
      v6 = 16;
    result = memcpy(a2 + 3, RemoteSockaddr, v6);
    a2[2] = v6;
    a2[1] = 2;
  }
  return result;
}
