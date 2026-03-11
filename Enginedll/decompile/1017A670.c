/*
 * func-name: sub_1017A670
 * func-address: 0x1017a670
 * callers: 0x10005230, 0x10010390, 0x1001c2e0, 0x10097910, 0x10097ea0, 0x100e5360, 0x100e5d70, 0x1011aa80, 0x1011b3a0, 0x10120cb0, 0x10136530, 0x1017aa70
 * callees: none
 */

int __cdecl sub_1017A670(int a1, int a2)
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
