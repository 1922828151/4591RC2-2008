/*
 * func-name: sub_102C4C60
 * func-address: 0x102c4c60
 * callers: 0x102c5030, 0x102c62f0
 * callees: none
 */

int __cdecl sub_102C4C60(int a1, int a2, int a3)
{
  int i; // esi
  int result; // eax

  for ( i = a1; i != a2; i += 64 )
  {
    std::string::operator=(i, a3);
    *(_DWORD *)(i + 28) = *(_DWORD *)(a3 + 28);
    *(_DWORD *)(i + 32) = *(_DWORD *)(a3 + 32);
    result = std::string::operator=(i + 36, a3 + 36);
  }
  return result;
}
