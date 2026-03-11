/*
 * func-name: SetCurrentDirectoryA
 * func-address: 0x102c98ee
 * callers: none
 * callees: none
 */

// attributes: thunk
BOOL __stdcall SetCurrentDirectoryA(LPCSTR lpPathName)
{
  return __imp_SetCurrentDirectoryA(lpPathName);
}
