/*
 * func-name: sub_100FF6D0
 * func-address: 0x100ff6d0
 * callers: 0x101006c0
 * callees: 0x1000e890
 */

int __cdecl sub_100FF6D0(int a1, int a2, int a3)
{
  int i; // esi
  int result; // eax

  for ( i = a1; i != a2; i += 16 )
    result = sub_1000E890(i, a3);
  return result;
}
