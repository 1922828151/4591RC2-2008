/*
 * func-name: sub_101A8610
 * func-address: 0x101a8610
 * callers: 0x1001748b
 * callees: none
 */

int __cdecl sub_101A8610(int a1, int a2, float *a3)
{
  int result; // eax

  for ( result = a1; result != a2; *(float *)(result - 4) = *a3 )
    result += 4;
  return result;
}
