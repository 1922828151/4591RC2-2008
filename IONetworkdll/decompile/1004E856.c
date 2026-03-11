/*
 * func-name: AcceptEx
 * func-address: 0x1004e856
 * callers: 0x1001aac0
 * callees: none
 */

// attributes: thunk
BOOL __stdcall AcceptEx(
        SOCKET sListenSocket,
        SOCKET sAcceptSocket,
        PVOID lpOutputBuffer,
        DWORD dwReceiveDataLength,
        DWORD dwLocalAddressLength,
        DWORD dwRemoteAddressLength,
        LPDWORD lpdwBytesReceived,
        LPOVERLAPPED lpOverlapped)
{
  return __imp_AcceptEx(
           sListenSocket,
           sAcceptSocket,
           lpOutputBuffer,
           dwReceiveDataLength,
           dwLocalAddressLength,
           dwRemoteAddressLength,
           lpdwBytesReceived,
           lpOverlapped);
}
