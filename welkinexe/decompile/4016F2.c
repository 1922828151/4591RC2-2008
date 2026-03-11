/*
 * func-name: MessageBoxW
 * func-address: 0x4016f2
 * callers: none
 * callees: none
 */

// attributes: thunk
int __stdcall MessageBoxW(HWND hWnd, LPCWSTR lpText, LPCWSTR lpCaption, UINT uType)
{
  return __imp_MessageBoxW(hWnd, lpText, lpCaption, uType);
}
