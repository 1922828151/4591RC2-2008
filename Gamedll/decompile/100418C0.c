/*
 * func-name: sub_100418C0
 * func-address: 0x100418c0
 * callers: 0x10017e63
 * callees: none
 */

int __cdecl sub_100418C0(int a1, int a2, int a3)
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
    *(_DWORD *)(v4 + 56) = *(_DWORD *)(v3 + 56);
    *(float *)(v4 + 60) = *(float *)(v3 + 60);
    *(_BYTE *)(v4 + 64) = *(_BYTE *)(v3 + 64);
    *(float *)(v4 + 68) = *(float *)(v3 + 68);
    v3 += 80;
    v4 += 80;
    *(float *)(v4 - 8) = *(float *)(v3 - 8);
    *(float *)(v4 - 4) = *(float *)(v3 - 4);
  }
  while ( v3 != a2 );
  return v4;
}
