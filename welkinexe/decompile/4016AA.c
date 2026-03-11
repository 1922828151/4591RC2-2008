/*
 * func-name: EndDialog
 * func-address: 0x4016aa
 * callers: none
 * callees: none
 */

// attributes: thunk
BOOL __stdcall EndDialog(HWND hDlg, INT_PTR nResult)
{
  return __imp_EndDialog(hDlg, nResult);
}
