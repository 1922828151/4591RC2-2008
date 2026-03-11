/*
 * func-name: FreeLibrary
 * func-address: 0x401656
 * callers: none
 * callees: none
 */

// attributes: thunk
BOOL __stdcall FreeLibrary(HMODULE hLibModule)
{
  return __imp_FreeLibrary(hLibModule);
}
