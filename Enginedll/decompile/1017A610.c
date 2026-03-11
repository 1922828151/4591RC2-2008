/*
 * func-name: sub_1017A610
 * func-address: 0x1017a610
 * callers: 0x100158b0, 0x10015b30, 0x10015e90, 0x1008b740, 0x100db530, 0x100db650, 0x100e3020, 0x100ef9b0, 0x1010a6c0, 0x1010ad30, 0x1010ae70, 0x1010b430, 0x1010b610, 0x1010b790, 0x1010b910, 0x1010bad0, 0x1010c190, 0x101364b0, 0x10171860, 0x10174aa0, 0x10174d80, 0x10175180, 0x10175470, 0x1017ac60, 0x1017aea0, 0x1017b280, 0x1017bd70, 0x1017bed0, 0x1017cd90, 0x1017d680
 * callees: none
 */

unsigned int __cdecl sub_1017A610(int a1)
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
