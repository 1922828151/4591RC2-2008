/*
 * func-name: sub_100E7BF0
 * func-address: 0x100e7bf0
 * callers: 0x100e7e40
 * callees: none
 */

int __cdecl sub_100E7BF0(int a1, int a2, int a3)
{
  int v3; // esi
  int v4; // edi

  v3 = a2;
  if ( a1 == a2 )
    return a3;
  v4 = a3;
  do
  {
    v3 -= 32;
    v4 -= 32;
    std::string::operator=(v4, v3);
    *(_DWORD *)(v4 + 28) = *(_DWORD *)(v3 + 28);
  }
  while ( v3 != a1 );
  return v4;
}
