/*
 * func-name: sub_10186F70
 * func-address: 0x10186f70
 * callers: 0x1000c17b
 * callees: none
 */

int __cdecl sub_10186F70(int a1, int a2, int a3)
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
