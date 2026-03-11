/*
 * func-name: DeleteFileA
 * func-address: 0x102c98b2
 * callers: none
 * callees: none
 */

// attributes: thunk
BOOL __stdcall DeleteFileA(LPCSTR lpFileName)
{
  return __imp_DeleteFileA(lpFileName);
}
