/*
 * func-name: LoadCursorW
 * func-address: 0x4016c8
 * callers: none
 * callees: none
 */

// attributes: thunk
HCURSOR __stdcall LoadCursorW(HINSTANCE hInstance, LPCWSTR lpCursorName)
{
  return __imp_LoadCursorW(hInstance, lpCursorName);
}
