/*
 * func-name: sub_100489D0
 * func-address: 0x100489d0
 * callers: 0x10048c00
 * callees: 0x1000d550
 */

int __cdecl sub_100489D0(int a1, int a2, int a3)
{
  int i; // esi
  int result; // eax

  for ( i = a1; i != a2; i += 44 )
  {
    std::string::operator=(i, a3);
    result = std::vector<Actor *>::operator=(i + 28, a3 + 28);
  }
  return result;
}
