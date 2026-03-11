/*
 * func-name: sub_101FBE60
 * func-address: 0x101fbe60
 * callers: 0x1001a40b
 * callees: none
 */

int __cdecl sub_101FBE60(int a1, int a2, int a3)
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
    std::string::operator=(v4 + 4, v3 + 4);
    *(_DWORD *)(v4 + 32) = *(_DWORD *)(v3 + 32);
    *(_BYTE *)(v4 + 36) = *(_BYTE *)(v3 + 36);
    *(_DWORD *)(v4 + 40) = *(_DWORD *)(v3 + 40);
    *(_DWORD *)(v4 + 44) = *(_DWORD *)(v3 + 44);
    *(_DWORD *)(v4 + 48) = *(_DWORD *)(v3 + 48);
    *(_DWORD *)(v4 + 52) = *(_DWORD *)(v3 + 52);
    *(float *)(v4 + 56) = *(float *)(v3 + 56);
    *(_DWORD *)(v4 + 60) = *(_DWORD *)(v3 + 60);
    *(_DWORD *)(v4 + 64) = *(_DWORD *)(v3 + 64);
    *(_DWORD *)(v4 + 68) = *(_DWORD *)(v3 + 68);
    *(_DWORD *)(v4 + 72) = *(_DWORD *)(v3 + 72);
    *(_DWORD *)(v4 + 76) = *(_DWORD *)(v3 + 76);
    *(_DWORD *)(v4 + 80) = *(_DWORD *)(v3 + 80);
  }
  while ( v3 != a1 );
  return v4;
}
