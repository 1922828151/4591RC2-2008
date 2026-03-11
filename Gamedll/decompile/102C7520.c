/*
 * func-name: sub_102C7520
 * func-address: 0x102c7520
 * callers: 0x102b9c80, 0x102bd7e0, 0x102bd940, 0x102be800, 0x102bf0f0, 0x102c7b70, 0x102c7db0, 0x102c8190
 * callees: none
 */

unsigned int __cdecl sub_102C7520(int a1)
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
