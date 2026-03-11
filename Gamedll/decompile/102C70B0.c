/*
 * func-name: sub_102C70B0
 * func-address: 0x102c70b0
 * callers: none
 * callees: none
 */

char __cdecl sub_102C70B0(int a1, int a2)
{
  int v2; // esi
  int v4; // esi
  char *v5; // edi
  char *v6; // ebx
  int v7; // [esp+8h] [ebp-4h]

  v2 = std::string::length(a1);
  if ( v2 != std::string::length(a2) )
    return 0;
  v4 = 0;
  if ( !std::string::length(a1) )
    return 1;
  while ( 1 )
  {
    v5 = (char *)std::string::operator[](a1, v4);
    v6 = (char *)std::string::operator[](a2, v4);
    v7 = tolower(*v5);
    if ( v7 != tolower(*v6) )
      break;
    if ( ++v4 >= (unsigned int)std::string::length(a1) )
      return 1;
  }
  return 0;
}
