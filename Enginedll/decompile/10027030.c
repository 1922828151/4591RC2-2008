/*
 * func-name: sub_10027030
 * func-address: 0x10027030
 * callers: 0x1002f1c0, 0x1002f4a0, 0x100e8600, 0x10127000
 * callees: none
 */

int __stdcall sub_10027030(int a1, int a2)
{
  int i; // esi
  int result; // eax

  for ( i = a1; i != a2; i += 32 )
    result = std::string::~string(i);
  return result;
}
