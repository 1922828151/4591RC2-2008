/*
 * func-name: sub_10107DA0
 * func-address: 0x10107da0
 * callers: 0x1000dc7e
 * callees: none
 */

int __cdecl sub_10107DA0(int a1, int a2, int a3)
{
  int v3; // esi
  int v4; // edi

  v3 = a2;
  if ( a1 == a2 )
    return a3;
  v4 = a3;
  do
  {
    v3 -= 56;
    v4 -= 56;
    std::string::operator=(v4, v3);
    std::string::operator=(v4 + 28, v3 + 28);
  }
  while ( v3 != a1 );
  return v4;
}
