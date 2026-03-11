/*
 * func-name: sub_1017A280
 * func-address: 0x1017a280
 * callers: 0x10033d30, 0x10034690, 0x10034920, 0x10035930, 0x10037b30, 0x1007c450, 0x100a74b0, 0x100a7590, 0x100a76a0, 0x100a8d90, 0x100a9e80, 0x100ab740, 0x100ab850, 0x100aec90, 0x100b1d20, 0x100b1e40, 0x100b1f60, 0x100b7400, 0x100c3910, 0x100c3b20, 0x100c4990, 0x100c68a0, 0x100c6b30, 0x100c97b0, 0x100d5780, 0x100d59b0, 0x10150190, 0x101502f0, 0x10150a30
 * callees: none
 */

int __cdecl sub_1017A280(int a1, int a2)
{
  const char *v2; // eax
  size_t v4; // [esp-4h] [ebp-Ch]

  v4 = std::string::length(a2) + 1;
  v2 = (const char *)std::string::c_str(a2);
  mbstowcs(&Dest, v2, v4);
  std::wstring::wstring(a1, &Dest);
  return a1;
}
