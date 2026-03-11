/*
 * func-name: sub_1000CC00
 * func-address: 0x1000cc00
 * callers: 0x10006780, 0x1000d720, 0x1000f7e0, 0x1000f820, 0x1000f8d0, 0x10025920, 0x10025a60, 0x10025ab0, 0x10028930, 0x10029240, 0x100295d0, 0x1002bc70, 0x100511a0, 0x100e4420, 0x1013df40
 * callees: none
 */

int __cdecl sub_1000CC00(int a1, int a2)
{
  int i; // esi
  int result; // eax

  for ( i = a1; i != a2; i += 96 )
  {
    std::string::~string(i + 60);
    std::string::~string(i + 32);
    result = std::string::~string(i + 4);
  }
  return result;
}
