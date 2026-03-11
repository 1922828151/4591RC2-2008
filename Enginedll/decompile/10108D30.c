/*
 * func-name: sub_10108D30
 * func-address: 0x10108d30
 * callers: 0x10109040, 0x10109060, 0x10109220, 0x10109510, 0x101b9140
 * callees: none
 */

int __cdecl sub_10108D30(int a1, int a2)
{
  int i; // esi
  int result; // eax

  for ( i = a1; i != a2; i += 64 )
  {
    std::string::~string(i + 28);
    result = std::string::~string(i);
  }
  return result;
}
