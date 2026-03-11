/*
 * func-name: sub_1017A310
 * func-address: 0x1017a310
 * callers: 0x100158b0, 0x10015b30, 0x10015e90, 0x100384a0, 0x1003d0f0, 0x10044cf0, 0x10047a80, 0x10083770, 0x1008b740, 0x10097220, 0x10097ea0, 0x100e1e90, 0x1010a6c0, 0x1010ad30, 0x1010ae70, 0x1010b430, 0x1010b610, 0x1010b790, 0x1010b910, 0x1010bad0, 0x1010c190, 0x10120cb0, 0x10136530, 0x10171860, 0x10174aa0, 0x10174d80, 0x10175180, 0x10175470
 * callees: none
 */

int __cdecl sub_1017A310(int a1, int a2)
{
  int last_of; // eax

  last_of = std::string::find_last_of(a2, &unk_101CE7D4, std::string::npos);
  if ( last_of == std::string::npos )
    std::string::string(a1, a2);
  else
    std::string::substr(a2, a1, last_of + 1, std::string::npos);
  return a1;
}
