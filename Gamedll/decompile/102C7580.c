/*
 * func-name: sub_102C7580
 * func-address: 0x102c7580
 * callers: 0x100e9b40, 0x100fe800, 0x100fe8f0, 0x100fea00, 0x100feee0, 0x100ff2c0, 0x10104e30, 0x10105140, 0x10105320, 0x1010fe30, 0x101113c0, 0x10111550, 0x101125e0, 0x10114160, 0x101594b0, 0x10161080, 0x1017e700, 0x10197460, 0x102c7980
 * callees: none
 */

void *__cdecl sub_102C7580(void *a1, void *a2)
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
