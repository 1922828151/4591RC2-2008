/*
 * func-name: sub_100054C0
 * func-address: 0x100054c0
 * callers: 0x10005b10, 0x10005d50, 0x10006130
 * callees: none
 */

unsigned int __cdecl sub_100054C0(int a1)
{
  unsigned int v1; // esi
  unsigned int result; // eax
  _BYTE *v3; // ebx
  int v4; // eax

  v1 = 0;
  result = std::string::length(a1);
  if ( result )
  {
    do
    {
      v3 = (_BYTE *)std::string::operator[](a1, v1);
      v4 = std::string::c_str(a1);
      *v3 = tolower(*(char *)(v4 + v1++));
      result = std::string::length(a1);
    }
    while ( v1 < result );
  }
  return result;
}
