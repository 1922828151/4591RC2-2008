/*
 * func-name: sub_1021E960
 * func-address: 0x1021e960
 * callers: 0x10010087
 * callees: none
 */

int __cdecl sub_1021E960(int a1, int a2, int a3)
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
    v3 += 84;
    v4 += 84;
  }
  while ( v3 != a2 );
  return v4;
}
