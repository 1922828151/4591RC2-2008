/*
 * func-name: DialogFunc
 * func-address: 0x10001b20
 * callers: 0x10001ba0
 * callees: none
 */

INT_PTR __stdcall DialogFunc(HWND hDlg, UINT a2, WPARAM a3, LPARAM a4)
{
  if ( a2 == 16 )
  {
    EndDialog(hDlg, 0);
    exit(0);
  }
  if ( a2 == 272 )
  {
    SetDlgItemTextA(hDlg, 1002, lpString);
    return 1;
  }
  else if ( a2 == 273 && ((_WORD)a3 == 1 || (_WORD)a3 == 2) )
  {
    EndDialog(hDlg, (unsigned __int16)a3);
    return 1;
  }
  else
  {
    return 0;
  }
}
