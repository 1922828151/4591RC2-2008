/*
 * func-name: sub_102C58D0
 * func-address: 0x102c58d0
 * callers: 0x102c5ac0
 * callees: none
 */

double *__stdcall sub_102C58D0(double *a1, int a2, double *a3)
{
  int v3; // eax
  double *i; // ecx

  v3 = a2;
  for ( i = a1; v3; ++i )
  {
    --v3;
    *i = *a3;
  }
  return &a1[a2];
}
