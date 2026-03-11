/*
 * func-name: sub_100050E0
 * func-address: 0x100050e0
 * callers: none
 * callees: none
 */

int __cdecl sub_100050E0(int a1, int a2)
{
  const WCHAR *v2; // eax
  int v4; // [esp-18h] [ebp-1Ch]

  v4 = *(_DWORD *)(a2 + 20);
  v2 = (const WCHAR *)std::wstring::c_str();
  MultiByteStr[WideCharToMultiByte(0, 0, v2, v4, MultiByteStr, 1024, 0, 0)] = 0;
  std::string::string(MultiByteStr);
  return a1;
}
