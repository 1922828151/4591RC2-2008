/*
 * func-name: sub_10013760
 * func-address: 0x10013760
 * callers: 0x100125f0
 * callees: none
 */

int __stdcall sub_10013760(int a1, int a2, _DWORD *a3)
{
  std::string::string(a1, a2);
  *(_DWORD *)(a1 + 28) = *a3;
  return a1;
}
