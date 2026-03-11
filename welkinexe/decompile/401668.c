/*
 * func-name: LoadLibraryW
 * func-address: 0x401668
 * callers: none
 * callees: none
 */

// attributes: thunk
HMODULE __stdcall LoadLibraryW(LPCWSTR lpLibFileName)
{
  return __imp_LoadLibraryW(lpLibFileName);
}
