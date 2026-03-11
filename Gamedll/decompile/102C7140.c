/*
 * func-name: sub_102C7140
 * func-address: 0x102c7140
 * callers: none
 * callees: none
 */

int __cdecl sub_102C7140(int a1, int a2)
{
  const WCHAR *v2; // eax
  int v4; // [esp-18h] [ebp-1Ch]

  v4 = *(_DWORD *)(a2 + 20);
  v2 = (const WCHAR *)std::wstring::c_str(a2);
  MultiByteStr[WideCharToMultiByte(0, 0, v2, v4, MultiByteStr, 1024, 0, 0)] = 0;
  std::string::string(a1, MultiByteStr);
  return a1;
}
