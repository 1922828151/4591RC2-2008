/*
 * func-name: sub_1014CE00
 * func-address: 0x1014ce00
 * callers: 0x100010fa
 * callees: 0x100025c7
 */

int __cdecl sub_1014CE00(int a1, int a2, int a3)
{
  int v3; // esi
  int v4; // edi

  v3 = a1;
  if ( a1 == a2 )
    return a3;
  v4 = a3;
  do
  {
    sub_100025C7(v3);
    v3 += 584;
    v4 += 584;
  }
  while ( v3 != a2 );
  return v4;
}
