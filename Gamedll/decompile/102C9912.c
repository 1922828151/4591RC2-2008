/*
 * func-name: MessageBoxA
 * func-address: 0x102c9912
 * callers: none
 * callees: none
 */

// attributes: thunk
int __stdcall MessageBoxA(HWND hWnd, LPCSTR lpText, LPCSTR lpCaption, UINT uType)
{
  return __imp_MessageBoxA(hWnd, lpText, lpCaption, uType);
}
