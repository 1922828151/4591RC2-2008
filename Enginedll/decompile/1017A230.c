/*
 * func-name: sub_1017A230
 * func-address: 0x1017a230
 * callers: 0x1007c450, 0x100a9e80, 0x100af560, 0x100c0990
 * callees: none
 */

int __cdecl sub_1017A230(int a1, int a2)
{
  const WCHAR *v2; // eax
  int v4; // [esp-18h] [ebp-1Ch]

  v4 = *(_DWORD *)(a2 + 20);
  v2 = (const WCHAR *)std::wstring::c_str(a2);
  byte_11248B38[WideCharToMultiByte(0, 0, v2, v4, byte_11248B38, 1024, 0, 0)] = 0;
  std::string::string(a1, byte_11248B38);
  return a1;
}
