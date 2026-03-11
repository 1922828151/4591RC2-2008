/*
 * func-name: ?wtoa@@YAPBDPB_W@Z
 * func-address: 0x10149480
 * callers: 0x10149850, 0x1014c730
 * callees: 0x101a251c
 */

CHAR *__cdecl wtoa(LPCWCH lpWideCharStr)
{
  memset(MultiByteStr, 0, sizeof(MultiByteStr));
  dword_11242514 = wcslen(lpWideCharStr);
  dword_11242510 = WideCharToMultiByte(0, 0, lpWideCharStr, dword_11242514, MultiByteStr, 1024, 0, 0);
  MultiByteStr[dword_11242510] = 0;
  return MultiByteStr;
}
