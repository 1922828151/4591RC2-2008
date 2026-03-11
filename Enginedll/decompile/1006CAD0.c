/*
 * func-name: sub_1006CAD0
 * func-address: 0x1006cad0
 * callers: 0x1006d5e0
 * callees: none
 */

int __cdecl sub_1006CAD0(int a1, int a2, int a3)
{
  int v3; // esi
  int v4; // edi

  v3 = a1;
  if ( a1 == a2 )
    return a3;
  v4 = a3;
  do
  {
    std::wstring::operator=(v4, v3);
    *(_DWORD *)(v4 + 28) = *(_DWORD *)(v3 + 28);
    *(_BYTE *)(v4 + 32) = *(_BYTE *)(v3 + 32);
    v3 += 36;
    v4 += 36;
  }
  while ( v3 != a2 );
  return v4;
}
