/*
 * func-name: sub_1009E150
 * func-address: 0x1009e150
 * callers: 0x1000ef3e
 * callees: 0x100089c7
 */

int __cdecl sub_1009E150(int a1, int a2, int a3)
{
  int v3; // esi
  int v4; // edi

  v3 = a1;
  if ( a1 == a2 )
    return a3;
  v4 = a3;
  do
  {
    sub_100089C7(v3);
    v3 += 184;
    v4 += 184;
  }
  while ( v3 != a2 );
  return v4;
}
