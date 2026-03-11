/*
 * func-name: sub_10041AD0
 * func-address: 0x10041ad0
 * callers: 0x1000b235
 * callees: none
 */

int __cdecl sub_10041AD0(int a1, int a2, int a3)
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
    std::string::operator=(v4 + 84, v3 + 84);
    *(_DWORD *)(v4 + 112) = *(_DWORD *)(v3 + 112);
    *(_DWORD *)(v4 + 116) = *(_DWORD *)(v3 + 116);
    v3 += 120;
    v4 += 120;
  }
  while ( v3 != a2 );
  return v4;
}
