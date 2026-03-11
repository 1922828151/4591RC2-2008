/*
 * func-name: sub_10099DB0
 * func-address: 0x10099db0
 * callers: 0x1009a680
 * callees: none
 */

int __cdecl sub_10099DB0(int a1, int a2, int a3)
{
  int i; // esi
  int result; // eax

  for ( i = a1; i != a2; i += 28 )
    result = std::wstring::operator=(i, a3);
  return result;
}
