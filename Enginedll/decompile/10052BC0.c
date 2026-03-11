/*
 * func-name: sub_10052BC0
 * func-address: 0x10052bc0
 * callers: 0x10052e60, 0x10053420, 0x10053800
 * callees: 0x10029a50
 */

int __cdecl sub_10052BC0(int a1, int a2, int a3)
{
  int i; // esi

  for ( i = a1; i != a2; i += 104 )
    CollisionInfo::operator=((double *)(i + a3 - a1), i);
  return a3 + 104 * ((a2 - a1) / 104);
}
