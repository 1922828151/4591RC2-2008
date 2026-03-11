/*
 * func-name: sub_1001DCC0
 * func-address: 0x1001dcc0
 * callers: none
 * callees: none
 */

BOOL __cdecl sub_1001DCC0(int a1, _BYTE *a2, _BYTE *a3, _BYTE *a4)
{
  _BYTE *v4; // edx
  char v5; // al

  v4 = a4;
  v5 = *a4;
  if ( !*a4 )
    return a2 == a3;
  while ( a2 != a3 && !*a2 && a2[1] == v5 )
  {
    v5 = *++v4;
    a2 += 2;
    if ( !v5 )
      return a2 == a3;
  }
  return 0;
}
