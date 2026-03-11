/*
 * func-name: CloseHandle
 * func-address: 0x102c98ac
 * callers: none
 * callees: none
 */

// attributes: thunk
BOOL __stdcall CloseHandle(HANDLE hObject)
{
  return __imp_CloseHandle(hObject);
}
