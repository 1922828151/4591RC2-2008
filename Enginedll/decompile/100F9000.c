/*
 * func-name: sub_100F9000
 * func-address: 0x100f9000
 * callers: 0x10100270, 0x101004c0, 0x10100940
 * callees: none
 */

bool __cdecl sub_100F9000(float *a1, float *a2)
{
  double v3; // st7
  double v4; // st6

  if ( *a2 == *a1 )
  {
    if ( a2[1] == a1[1] )
    {
      if ( a2[2] == a1[2] )
        return 0;
      v3 = a1[2];
      v4 = a2[2];
    }
    else
    {
      v3 = a1[1];
      v4 = a2[1];
    }
  }
  else
  {
    v3 = *a1;
    v4 = *a2;
  }
  return v4 > v3;
}
