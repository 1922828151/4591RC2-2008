/*
 * func-name: LoadStringW
 * func-address: 0x4016f8
 * callers: none
 * callees: none
 */

// attributes: thunk
int __stdcall LoadStringW(HINSTANCE hInstance, UINT uID, LPWSTR lpBuffer, int cchBufferMax)
{
  return __imp_LoadStringW(hInstance, uID, lpBuffer, cchBufferMax);
}
