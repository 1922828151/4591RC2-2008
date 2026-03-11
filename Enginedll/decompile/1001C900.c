/*
 * func-name: sub_1001C900
 * func-address: 0x1001c900
 * callers: 0x1001eb10
 * callees: none
 */

int __cdecl sub_1001C900(int a1, int a2, int a3)
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
    std::string::operator=(v4 + 4, v3 + 4);
    *(_DWORD *)(v4 + 32) = *(_DWORD *)(v3 + 32);
    *(_DWORD *)(v4 + 36) = *(_DWORD *)(v3 + 36);
    *(_BYTE *)(v4 + 40) = *(_BYTE *)(v3 + 40);
    *(_BYTE *)(v4 + 41) = *(_BYTE *)(v3 + 41);
    *(_BYTE *)(v4 + 42) = *(_BYTE *)(v3 + 42);
    *(_BYTE *)(v4 + 43) = *(_BYTE *)(v3 + 43);
    *(_DWORD *)(v4 + 44) = *(_DWORD *)(v3 + 44);
    *(_DWORD *)(v4 + 48) = *(_DWORD *)(v3 + 48);
    v3 += 52;
    v4 += 52;
  }
  while ( v3 != a2 );
  return v4;
}
