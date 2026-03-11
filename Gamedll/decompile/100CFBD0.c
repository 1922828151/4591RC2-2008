/*
 * func-name: sub_100CFBD0
 * func-address: 0x100cfbd0
 * callers: 0x1001050f
 * callees: 0x100089c7
 */

int __cdecl sub_100CFBD0(int a1, int a2, int a3)
{
  int i; // esi
  int result; // eax

  for ( i = a1; i != a2; i += 184 )
    result = sub_100089C7(a3);
  return result;
}
