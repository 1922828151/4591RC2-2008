/*
 * func-name: sub_100F6F20
 * func-address: 0x100f6f20
 * callers: 0x1000b582
 * callees: none
 */

int __cdecl sub_100F6F20(int a1, int a2, int a3)
{
  int i; // esi
  int result; // eax

  for ( i = a1; i != a2; i += 36 )
  {
    *(_DWORD *)i = *(_DWORD *)a3;
    result = std::string::operator=(i + 4, a3 + 4);
    *(float *)(i + 32) = *(float *)(a3 + 32);
  }
  return result;
}
