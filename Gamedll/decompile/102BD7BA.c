/*
 * func-name: PathFileExistsA
 * func-address: 0x102bd7ba
 * callers: none
 * callees: none
 */

// attributes: thunk
BOOL __stdcall PathFileExistsA(LPCSTR pszPath)
{
  return __imp_PathFileExistsA(pszPath);
}
