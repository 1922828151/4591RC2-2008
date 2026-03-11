/*
 * func-name: sub_102C5090
 * func-address: 0x102c5090
 * callers: 0x102c5ac0
 * callees: none
 */

int __cdecl sub_102C5090(int a1, int a2, double *a3)
{
  int result; // eax

  for ( result = a1; result != a2; *(double *)(result - 8) = *a3 )
    result += 8;
  return result;
}
