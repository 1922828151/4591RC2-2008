/*
 * func-name: sub_102C7220
 * func-address: 0x102c7220
 * callers: 0x10104e30, 0x10105140, 0x1010fe30, 0x1022ef60
 * callees: none
 */

void *__cdecl sub_102C7220(void *a1, void *a2)
{
  int last_of; // eax

  last_of = std::string::find_last_of(a2, "\\/", std::string::npos);
  if ( last_of == std::string::npos )
    std::string::string(a1, a2);
  else
    std::string::substr(a2, a1, last_of + 1, std::string::npos);
  return a1;
}
