/*
 * func-name: sub_10299B00
 * func-address: 0x10299b00
 * callers: 0x10002c25
 * callees: 0x100148e4
 */

int __cdecl sub_10299B00(int a1, int a2, int a3)
{
  int v3; // esi
  int v4; // edi

  v3 = a2;
  if ( a1 == a2 )
    return a3;
  v4 = a3;
  do
  {
    v3 -= 128;
    v4 -= 128;
    sub_100148E4(v3);
  }
  while ( v3 != a1 );
  return v4;
}
