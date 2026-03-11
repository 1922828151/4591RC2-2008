/*
 * func-name: ReadFile
 * func-address: 0x102c98a0
 * callers: none
 * callees: none
 */

// attributes: thunk
BOOL __stdcall ReadFile(
        HANDLE hFile,
        LPVOID lpBuffer,
        DWORD nNumberOfBytesToRead,
        LPDWORD lpNumberOfBytesRead,
        LPOVERLAPPED lpOverlapped)
{
  return __imp_ReadFile(hFile, lpBuffer, nNumberOfBytesToRead, lpNumberOfBytesRead, lpOverlapped);
}
