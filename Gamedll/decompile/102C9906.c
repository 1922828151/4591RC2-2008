/*
 * func-name: FindNextFileA
 * func-address: 0x102c9906
 * callers: none
 * callees: none
 */

// attributes: thunk
BOOL __stdcall FindNextFileA(HANDLE hFindFile, LPWIN32_FIND_DATAA lpFindFileData)
{
  return __imp_FindNextFileA(hFindFile, lpFindFileData);
}
