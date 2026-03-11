/*
 * func-name: sub_101190E0
 * func-address: 0x101190e0
 * callers: 0x101198c0
 * callees: none
 */

char __cdecl sub_101190E0(int a1)
{
  int v1; // esi
  char *v2; // eax

  v1 = 0;
  if ( !std::string::length(a1) )
    return 1;
  while ( 1 )
  {
    v2 = (char *)std::string::operator[](a1, v1);
    if ( !isdigit(*v2)
      && *(_BYTE *)std::string::operator[](a1, v1) != 46
      && *(_BYTE *)std::string::operator[](a1, v1) != 45
      && *(_BYTE *)std::string::operator[](a1, v1) != 43 )
    {
      break;
    }
    if ( ++v1 >= (unsigned int)std::string::length(a1) )
      return 1;
  }
  return 0;
}
