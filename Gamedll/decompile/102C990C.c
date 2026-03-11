/*
 * func-name: FindFirstFileA
 * func-address: 0x102c990c
 * callers: none
 * callees: none
 */

// attributes: thunk
HANDLE __stdcall FindFirstFileA(LPCSTR lpFileName, LPWIN32_FIND_DATAA lpFindFileData)
{
  return __imp_FindFirstFileA(lpFileName, lpFindFileData);
}
