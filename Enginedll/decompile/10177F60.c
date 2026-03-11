/*
 * func-name: GetFileVersionInfoA
 * func-address: 0x10177f60
 * callers: 0x10095d70
 * callees: none
 */

// attributes: thunk
BOOL __stdcall GetFileVersionInfoA(LPCSTR lptstrFilename, DWORD dwHandle, DWORD dwLen, LPVOID lpData)
{
  return __imp_GetFileVersionInfoA(lptstrFilename, dwHandle, dwLen, lpData);
}
