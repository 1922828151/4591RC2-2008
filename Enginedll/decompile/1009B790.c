/*
 * func-name: sub_1009B790
 * func-address: 0x1009b790
 * callers: 0x1009b880
 * callees: 0x1009b530
 */

int __cdecl sub_1009B790(int a1, int a2, int a3)
{
  int i; // esi
  int result; // eax

  for ( i = a1; i != a2; i += 104 )
  {
    sub_1009B530(i, (_DWORD *)a3);
    std::string::operator=(i + 16, a3 + 16);
    std::string::operator=(i + 44, a3 + 44);
    *(_BYTE *)(i + 72) = *(_BYTE *)(a3 + 72);
    result = std::string::operator=(i + 76, a3 + 76);
  }
  return result;
}
