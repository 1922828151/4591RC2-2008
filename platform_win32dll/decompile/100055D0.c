/*
 * func-name: sub_100055D0
 * func-address: 0x100055d0
 * callers: none
 * callees: none
 */

int __cdecl sub_100055D0(int a1, int a2)
{
  unsigned int i; // esi
  _BYTE *v3; // ebp
  int v4; // eax

  std::string::string(a1, &a2);
  for ( i = 0; i < std::string::length(a1); ++i )
  {
    v3 = (_BYTE *)std::string::operator[](a1, i);
    v4 = std::string::c_str(a1);
    *v3 = toupper(*(char *)(v4 + i));
  }
  std::string::~string(&a2);
  return a1;
}
