/*
 * func-name: sub_102603B0
 * func-address: 0x102603b0
 * callers: 0x10008170
 * callees: 0x102c9fe0
 */

int __cdecl sub_102603B0(float a1, float a2, int a3)
{
  std::wstring::operator=(a3, (char *)&unk_103B7DE8 - 28 * (int)(a2 / -500.0));
  return std::wstring::operator+=(a3, (char *)&unk_103B7F00 - 28 * (int)(a1 / -500.0));
}
