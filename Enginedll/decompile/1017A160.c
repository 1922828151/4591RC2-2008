/*
 * func-name: sub_1017A160
 * func-address: 0x1017a160
 * callers: 0x1005f470, 0x1005f670, 0x100e0df0, 0x100ee360
 * callees: none
 */

double __cdecl sub_1017A160(float a1, float a2, float a3)
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
