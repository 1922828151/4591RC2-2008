/*
 * func-name: sub_100051C0
 * func-address: 0x100051c0
 * callers: none
 * callees: none
 */

int __cdecl sub_100051C0(int a1, int a2)
{
  int last_of; // eax

  last_of = std::string::find_last_of(a2, "\\/", std::string::npos);
  if ( last_of == std::string::npos )
    std::string::string(a1, a2);
  else
    std::string::substr(a2, a1, last_of + 1, std::string::npos);
  return a1;
}
