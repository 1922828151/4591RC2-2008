/*
 * func-name: sub_100E7CB0
 * func-address: 0x100e7cb0
 * callers: 0x100e8600, 0x10127000
 * callees: none
 */

int __cdecl sub_100E7CB0(int a1, int a2, int a3)
{
  int i; // esi
  int result; // eax

  for ( i = a1; i != a2; i += 32 )
  {
    std::string::operator=(i, a3);
    result = *(_DWORD *)(a3 + 28);
    *(_DWORD *)(i + 28) = result;
  }
  return result;
}
