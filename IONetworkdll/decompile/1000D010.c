/*
 * func-name: sub_1000D010
 * func-address: 0x1000d010
 * callers: 0x10001e20, 0x10007420, 0x1003e800, 0x100407c0
 * callees: 0x1004e85c
 */

int sub_1000D010()
{
  int v0; // edi
  unsigned int v1; // eax
  int i; // esi

  v0 = operator new(17);
  *(_DWORD *)v0 = 0;
  *(_DWORD *)(v0 + 4) = 0;
  *(_DWORD *)(v0 + 8) = 0;
  *(_DWORD *)(v0 + 12) = 0;
  *(_BYTE *)(v0 + 16) = 0;
  v1 = time64(0);
  srand(v1);
  for ( i = 0; i < 16; *(_BYTE *)(i + v0 - 1) = rand() % 95 + 32 )
    ++i;
  return v0;
}
