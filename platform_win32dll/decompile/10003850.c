/*
 * func-name: sub_10003850
 * func-address: 0x10003850
 * callers: 0x10003c00
 * callees: none
 */

int __cdecl sub_10003850(int a1, int a2, int a3)
{
  int i; // esi
  int result; // eax

  for ( i = a1; i != a2; i += 28 )
    result = std::string::operator=(i, a3);
  return result;
}
