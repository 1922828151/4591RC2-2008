/*
 * func-name: GetAcceptExSockaddrs
 * func-address: 0x1004e850
 * callers: 0x10018650
 * callees: none
 */

// attributes: thunk
void __stdcall GetAcceptExSockaddrs(
        PVOID lpOutputBuffer,
        DWORD dwReceiveDataLength,
        DWORD dwLocalAddressLength,
        DWORD dwRemoteAddressLength,
        struct sockaddr **LocalSockaddr,
        LPINT LocalSockaddrLength,
        struct sockaddr **RemoteSockaddr,
        LPINT RemoteSockaddrLength)
{
  __imp_GetAcceptExSockaddrs(
    lpOutputBuffer,
    dwReceiveDataLength,
    dwLocalAddressLength,
    dwRemoteAddressLength,
    LocalSockaddr,
    LocalSockaddrLength,
    RemoteSockaddr,
    RemoteSockaddrLength);
}
