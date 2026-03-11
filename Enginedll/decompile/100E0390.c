/*
 * func-name: sub_100E0390
 * func-address: 0x100e0390
 * callers: 0x100e0590
 * callees: none
 */

int __cdecl sub_100E0390(int a1, int a2, float *a3)
{
  int result; // eax

  for ( result = a1; result != a2; *(float *)(result - 4) = *a3 )
    result += 4;
  return result;
}
