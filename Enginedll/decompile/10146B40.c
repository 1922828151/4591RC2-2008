/*
 * func-name: sub_10146B40
 * func-address: 0x10146b40
 * callers: 0x10146e00, 0x10147110
 * callees: 0x10029a50
 */

double *__cdecl sub_10146B40(int a1, int a2, _DWORD *a3)
{
  int i; // esi
  double *result; // eax

  for ( i = a1; i != a2; i += 112 )
  {
    *(_DWORD *)i = *a3;
    *(_DWORD *)(i + 4) = a3[1];
    result = CollisionInfo::operator=((double *)(i + 8), (int)(a3 + 2));
  }
  return result;
}
