/*
 * func-name: sub_10048150
 * func-address: 0x10048150
 * callers: 0x1000dbc0
 * callees: none
 */

int __cdecl sub_10048150(int a1, int a2, int a3)
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
    v3 += 56;
    v4 += 56;
  }
  while ( v3 != a2 );
  return v4;
}
