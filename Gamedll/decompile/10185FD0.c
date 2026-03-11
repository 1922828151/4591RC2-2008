/*
 * func-name: sub_10185FD0
 * func-address: 0x10185fd0
 * callers: 0x1000af3d
 * callees: none
 */

int __cdecl sub_10185FD0(int a1, int a2, int a3)
{
  int v3; // esi
  int v4; // edi

  v3 = a2;
  if ( a1 == a2 )
    return a3;
  v4 = a3;
  do
  {
    v3 -= 80;
    v4 -= 80;
    std::string::operator=(v4, v3);
    std::string::operator=(v4 + 28, v3 + 28);
    *(_DWORD *)(v4 + 56) = *(_DWORD *)(v3 + 56);
    *(float *)(v4 + 60) = *(float *)(v3 + 60);
    *(_BYTE *)(v4 + 64) = *(_BYTE *)(v3 + 64);
    *(float *)(v4 + 68) = *(float *)(v3 + 68);
    *(float *)(v4 + 72) = *(float *)(v3 + 72);
    *(float *)(v4 + 76) = *(float *)(v3 + 76);
  }
  while ( v3 != a1 );
  return v4;
}
