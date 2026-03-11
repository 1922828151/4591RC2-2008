/*
 * func-name: LoadIconW
 * func-address: 0x4016ce
 * callers: none
 * callees: none
 */

// attributes: thunk
HICON __stdcall LoadIconW(HINSTANCE hInstance, LPCWSTR lpIconName)
{
  return __imp_LoadIconW(hInstance, lpIconName);
}
