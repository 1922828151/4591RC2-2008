/*
 * func-name: sub_10001D40
 * func-address: 0x10001d40
 * callers: 0x10001db0
 * callees: 0x10019750
 */

int __cdecl sub_10001D40(int a1, HWND hDlg, int nIDDlgItem)
{
  HWND DlgItem; // eax
  CHAR String[256]; // [esp+8h] [ebp-104h] BYREF

  DlgItem = GetDlgItem(hDlg, nIDDlgItem);
  GetWindowTextA(DlgItem, String, 256);
  std::string::string(String);
  return a1;
}
