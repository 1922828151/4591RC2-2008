/*
 * func-name: GetFileVersionInfoSizeA
 * func-address: 0x10177f66
 * callers: 0x10095d70
 * callees: none
 */

// attributes: thunk
DWORD __stdcall GetFileVersionInfoSizeA(LPCSTR lptstrFilename, LPDWORD lpdwHandle)
{
  return __imp_GetFileVersionInfoSizeA(lptstrFilename, lpdwHandle);
}
