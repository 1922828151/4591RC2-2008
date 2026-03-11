/*
 * func-name: sub_101593F0
 * func-address: 0x101593f0
 * callers: 0x1015a060
 * callees: none
 */

int __cdecl sub_101593F0(int a1, int a2, int a3)
{
  int v3; // esi
  int v4; // edi

  v3 = a1;
  if ( a1 == a2 )
    return a3;
  v4 = a3;
  do
  {
    std::string::operator=(v4, v3);
    std::string::operator=(v4 + 28, v3 + 28);
    std::string::operator=(v4 + 56, v3 + 56);
    v3 += 84;
    v4 += 84;
  }
  while ( v3 != a2 );
  return v4;
}
