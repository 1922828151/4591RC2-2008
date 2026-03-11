/*
 * func-name: CopyFileA
 * func-address: 0x102c98c4
 * callers: none
 * callees: none
 */

// attributes: thunk
BOOL __stdcall CopyFileA(LPCSTR lpExistingFileName, LPCSTR lpNewFileName, BOOL bFailIfExists)
{
  return __imp_CopyFileA(lpExistingFileName, lpNewFileName, bFailIfExists);
}
