/*
 * func-name: TranslateAcceleratorW
 * func-address: 0x4016e0
 * callers: none
 * callees: none
 */

// attributes: thunk
int __stdcall TranslateAcceleratorW(HWND hWnd, HACCEL hAccTable, LPMSG lpMsg)
{
  return __imp_TranslateAcceleratorW(hWnd, hAccTable, lpMsg);
}
