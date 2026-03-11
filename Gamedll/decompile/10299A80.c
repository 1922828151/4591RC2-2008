/*
 * func-name: sub_10299A80
 * func-address: 0x10299a80
 * callers: 0x10004840
 * callees: 0x100148e4
 */

int __cdecl sub_10299A80(int a1, int a2, int a3)
{
  int v3; // esi
  int v4; // edi

  v3 = a1;
  if ( a1 == a2 )
    return a3;
  v4 = a3;
  do
  {
    sub_100148E4(v3);
    v3 += 128;
    v4 += 128;
  }
  while ( v3 != a2 );
  return v4;
}
