/*
 * func-name: sub_1014CEC0
 * func-address: 0x1014cec0
 * callers: 0x10003bbb
 * callees: 0x100025c7
 */

int __cdecl sub_1014CEC0(int a1, int a2, int a3)
{
  int v3; // esi
  int v4; // edi

  v3 = a2;
  if ( a1 == a2 )
    return a3;
  v4 = a3;
  do
  {
    v3 -= 584;
    v4 -= 584;
    sub_100025C7(v3);
  }
  while ( v3 != a1 );
  return v4;
}
