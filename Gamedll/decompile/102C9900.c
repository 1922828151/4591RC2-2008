/*
 * func-name: FindClose
 * func-address: 0x102c9900
 * callers: none
 * callees: none
 */

// attributes: thunk
BOOL __stdcall FindClose(HANDLE hFindFile)
{
  return __imp_FindClose(hFindFile);
}
