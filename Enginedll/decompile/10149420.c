/*
 * func-name: ?atow@@YAPB_WPBD@Z
 * func-address: 0x10149420
 * callers: 0x100c5390, 0x100d6e70, 0x1014a540
 * callees: 0x101a251c
 */

WCHAR *__cdecl atow(LPCCH lpMultiByteStr)
{
  memset(WideCharStr, 0, sizeof(WideCharStr));
  dword_11241D08 = strlen(lpMultiByteStr);
  dword_11241D04 = MultiByteToWideChar(0, 0, lpMultiByteStr, dword_11241D08, WideCharStr, 1024);
  WideCharStr[dword_11241D04] = 0;
  return WideCharStr;
}
