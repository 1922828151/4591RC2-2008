/*
 * func-name: sub_10117720
 * func-address: 0x10117720
 * callers: 0x10012238
 * callees: 0x10007dc9
 */

int __cdecl sub_10117720(int a1, int a2, int a3)
{
  int v3; // esi
  int v4; // edi

  v3 = a1;
  if ( a1 == a2 )
    return a3;
  v4 = a3;
  do
  {
    sub_10007DC9(v3);
    v3 += 936;
    v4 += 936;
  }
  while ( v3 != a2 );
  return v4;
}
