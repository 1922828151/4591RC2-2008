/*
 * func-name: sub_10251C60
 * func-address: 0x10251c60
 * callers: 0x100033a0
 * callees: none
 */

int __cdecl sub_10251C60(int a1, int a2, int a3)
{
  int v3; // esi
  int v4; // edi
  int v5; // eax

  v3 = a2;
  if ( a1 == a2 )
    return a3;
  v4 = a3;
  do
  {
    v5 = *(_DWORD *)(v3 - 56);
    v3 -= 56;
    v4 -= 56;
    *(_DWORD *)v4 = v5;
    std::wstring::operator=(v4 + 4, v3 + 4);
    *(_DWORD *)(v4 + 32) = *(_DWORD *)(v3 + 32);
    *(float *)(v4 + 36) = *(float *)(v3 + 36);
    *(float *)(v4 + 40) = *(float *)(v3 + 40);
    *(_DWORD *)(v4 + 44) = *(_DWORD *)(v3 + 44);
    *(_DWORD *)(v4 + 48) = *(_DWORD *)(v3 + 48);
    *(_BYTE *)(v4 + 52) = *(_BYTE *)(v3 + 52);
  }
  while ( v3 != a1 );
  return v4;
}
