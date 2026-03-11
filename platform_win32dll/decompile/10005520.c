/*
 * func-name: sub_10005520
 * func-address: 0x10005520
 * callers: 0x10005920
 * callees: none
 */

int __cdecl sub_10005520(int a1, int a2)
{
  unsigned int v2; // edi
  _BYTE *v3; // ebx
  int v4; // eax

  v2 = 0;
  std::string::string(a1, a2);
  if ( std::string::length(a1) )
  {
    do
    {
      v3 = (_BYTE *)std::string::operator[](a1, v2);
      v4 = std::string::c_str(a1);
      *v3 = tolower(*(char *)(v4 + v2++));
    }
    while ( v2 < std::string::length(a1) );
  }
  return a1;
}
