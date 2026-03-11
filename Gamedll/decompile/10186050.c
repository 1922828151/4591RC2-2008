/*
 * func-name: sub_10186050
 * func-address: 0x10186050
 * callers: 0x1000fa88
 * callees: 0x10007dc9
 */

int __cdecl sub_10186050(int a1, int a2, int a3)
{
  int v3; // esi
  int v4; // edi

  v3 = a2;
  if ( a1 == a2 )
    return a3;
  v4 = a3;
  do
  {
    v3 -= 936;
    v4 -= 936;
    sub_10007DC9(v3);
  }
  while ( v3 != a1 );
  return v4;
}
