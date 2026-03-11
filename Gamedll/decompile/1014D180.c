/*
 * func-name: sub_1014D180
 * func-address: 0x1014d180
 * callers: 0x1000bc99
 * callees: 0x100025c7
 */

int __cdecl sub_1014D180(int a1, int a2, int a3)
{
  int i; // esi
  int result; // eax

  for ( i = a1; i != a2; i += 584 )
    result = sub_100025C7(a3);
  return result;
}
