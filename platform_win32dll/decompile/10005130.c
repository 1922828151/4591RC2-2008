/*
 * func-name: sub_10005130
 * func-address: 0x10005130
 * callers: none
 * callees: none
 */

int __cdecl sub_10005130(int a1, int a2)
{
  const char *v2; // eax
  size_t v4; // [esp-4h] [ebp-Ch]

  v4 = std::string::length(a2) + 1;
  v2 = (const char *)std::string::c_str(a2);
  mbstowcs(&Dest, v2, v4);
  std::wstring::wstring(a1, &Dest);
  return a1;
}
