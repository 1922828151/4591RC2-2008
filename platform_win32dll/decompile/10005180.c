/*
 * func-name: sub_10005180
 * func-address: 0x10005180
 * callers: none
 * callees: none
 */

int __cdecl sub_10005180(int a1, int a2)
{
  int last_of; // eax

  last_of = std::string::find_last_of(a2, ".", std::string::npos);
  std::string::substr(a2, a1, 0, last_of);
  return a1;
}
