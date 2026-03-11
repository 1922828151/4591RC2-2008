/*
 * func-name: sub_10117A40
 * func-address: 0x10117a40
 * callers: 0x1000d09e
 * callees: none
 */

int __cdecl sub_10117A40(int a1, int a2, int a3)
{
  int i; // esi
  int result; // eax

  for ( i = a1; i != a2; i += 28 )
    result = std::string::operator=(i, a3);
  return result;
}
