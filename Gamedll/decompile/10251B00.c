/*
 * func-name: sub_10251B00
 * func-address: 0x10251b00
 * callers: 0x1000a9a2
 * callees: none
 */

int __cdecl sub_10251B00(int a1, int a2, int a3)
{
  int v3; // esi
  int v4; // edi

  v3 = a1;
  if ( a1 == a2 )
    return a3;
  v4 = a3;
  do
  {
    *(_DWORD *)v4 = *(_DWORD *)v3;
    std::wstring::operator=(v4 + 4, v3 + 4);
    *(_DWORD *)(v4 + 32) = *(_DWORD *)(v3 + 32);
    *(float *)(v4 + 36) = *(float *)(v3 + 36);
    v3 += 56;
    v4 += 56;
    *(float *)(v4 - 16) = *(float *)(v3 - 16);
    *(_DWORD *)(v4 - 12) = *(_DWORD *)(v3 - 12);
    *(_DWORD *)(v4 - 8) = *(_DWORD *)(v3 - 8);
    *(_BYTE *)(v4 - 4) = *(_BYTE *)(v3 - 4);
  }
  while ( v3 != a2 );
  return v4;
}
