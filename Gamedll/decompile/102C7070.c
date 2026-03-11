/*
 * func-name: sub_102C7070
 * func-address: 0x102c7070
 * callers: 0x100849f0
 * callees: none
 */

double __cdecl sub_102C7070(float a1, float a2, float a3)
{
  double v3; // st6

  v3 = a2;
  if ( a2 <= (double)a1 )
  {
    v3 = a3;
    if ( a3 >= (double)a1 )
      return a1;
  }
  return (float)v3;
}
