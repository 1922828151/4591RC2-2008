/*
 * func-name: sub_10215360
 * func-address: 0x10215360
 * callers: 0x1000b3f7
 * callees: none
 */

int __cdecl sub_10215360(int a1, int a2, int a3)
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
    v5 = *(_DWORD *)(v3 - 84);
    v3 -= 84;
    v4 -= 84;
    *(_DWORD *)v4 = v5;
    *(float *)(v4 + 4) = *(float *)(v3 + 4);
    *(float *)(v4 + 8) = *(float *)(v3 + 8);
    std::string::operator=(v4 + 12, v3 + 12);
    std::string::operator=(v4 + 40, v3 + 40);
    *(_DWORD *)(v4 + 68) = *(_DWORD *)(v3 + 68);
    *(_BYTE *)(v4 + 72) = *(_BYTE *)(v3 + 72);
    *(_BYTE *)(v4 + 73) = *(_BYTE *)(v3 + 73);
    *(_BYTE *)(v4 + 74) = *(_BYTE *)(v3 + 74);
    *(_DWORD *)(v4 + 76) = *(_DWORD *)(v3 + 76);
    *(_DWORD *)(v4 + 80) = *(_DWORD *)(v3 + 80);
  }
  while ( v3 != a1 );
  return v4;
}
