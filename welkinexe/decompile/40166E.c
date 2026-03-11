/*
 * func-name: SetCurrentDirectoryW
 * func-address: 0x40166e
 * callers: none
 * callees: none
 */

// attributes: thunk
BOOL __stdcall SetCurrentDirectoryW(LPCWSTR lpPathName)
{
  return __imp_SetCurrentDirectoryW(lpPathName);
}
