/*
 * func-name: sub_1009B730
 * func-address: 0x1009b730
 * callers: 0x1009b7f0
 * callees: 0x1009b530
 */

int __cdecl sub_1009B730(int a1, int a2, int a3)
{
  int v3; // esi
  int v4; // edi

  v3 = a2;
  if ( a1 == a2 )
    return a3;
  v4 = a3;
  do
  {
    v3 -= 104;
    v4 -= 104;
    sub_1009B530(v4, (_DWORD *)v3);
    std::string::operator=(v4 + 16, v3 + 16);
    std::string::operator=(v4 + 44, v3 + 44);
    *(_BYTE *)(v4 + 72) = *(_BYTE *)(v3 + 72);
    std::string::operator=(v4 + 76, v3 + 76);
  }
  while ( v3 != a1 );
  return v4;
}
