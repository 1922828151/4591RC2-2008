/*
 * func-name: LoadAcceleratorsW
 * func-address: 0x4016ec
 * callers: none
 * callees: none
 */

// attributes: thunk
HACCEL __stdcall LoadAcceleratorsW(HINSTANCE hInstance, LPCWSTR lpTableName)
{
  return __imp_LoadAcceleratorsW(hInstance, lpTableName);
}
