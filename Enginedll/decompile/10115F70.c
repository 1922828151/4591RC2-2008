/*
 * func-name: sub_10115F70
 * func-address: 0x10115f70
 * callers: 0x10116070
 * callees: 0x101121f0, 0x10115d40
 */

int __cdecl sub_10115F70(int a1, int a2, int a3)
{
  int v3; // esi
  int v4; // edi

  v3 = a2;
  if ( a1 == a2 )
    return a3;
  v4 = a3;
  do
  {
    v3 -= 60;
    v4 -= 60;
    std::string::operator=(v4, v3);
    sub_10115D40(v4 + 28, v3 + 28);
    sub_101121F0((int *)(v4 + 44), (int *)(v3 + 44));
  }
  while ( v3 != a1 );
  return v4;
}
