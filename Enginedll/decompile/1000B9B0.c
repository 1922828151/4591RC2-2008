/*
 * func-name: sub_1000B9B0
 * func-address: 0x1000b9b0
 * callers: 0x1000dc90
 * callees: none
 */

int __cdecl sub_1000B9B0(int a1, int a2, int a3)
{
  int i; // esi
  int result; // eax

  for ( i = a1; i != a2; i += 28 )
    result = std::string::operator=(i, a3);
  return result;
}
