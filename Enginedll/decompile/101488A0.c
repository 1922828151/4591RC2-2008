/*
 * func-name: sub_101488A0
 * func-address: 0x101488a0
 * callers: 0x10148a20
 * callees: 0x10029a50
 */

double *__cdecl sub_101488A0(double *a1, double *a2, int a3)
{
  double *i; // esi
  double *result; // eax

  for ( i = a1; i != a2; i += 13 )
    result = CollisionInfo::operator=(i, a3);
  return result;
}
