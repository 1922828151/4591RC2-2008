/*
 * func-name: sub_1017A2D0
 * func-address: 0x1017a2d0
 * callers: 0x10015b30, 0x1008b740, 0x100e1e90, 0x1010a6c0, 0x1010ad30, 0x1010ae70, 0x1010b430, 0x1010b610, 0x1010b790, 0x1010b910, 0x1010bad0, 0x1010c190, 0x10116db0, 0x10136530
 * callees: none
 */

int __cdecl sub_1017A2D0(int a1, int a2)
{
  int last_of; // eax

  last_of = std::string::find_last_of(a2, &unk_101CE7D0, std::string::npos);
  std::string::substr(a2, a1, 0, last_of);
  return a1;
}
