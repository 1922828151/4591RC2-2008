/*
 * func-name: sub_10216190
 * func-address: 0x10216190
 * callers: 0x1000f6af
 * callees: none
 */

int __cdecl sub_10216190(int a1, int a2, int a3)
{
  int i; // esi
  int result; // eax

  for ( i = a1; i != a2; i += 84 )
  {
    *(_DWORD *)i = *(_DWORD *)a3;
    *(float *)(i + 4) = *(float *)(a3 + 4);
    *(float *)(i + 8) = *(float *)(a3 + 8);
    std::string::operator=(i + 12, a3 + 12);
    std::string::operator=(i + 40, a3 + 40);
    *(_DWORD *)(i + 68) = *(_DWORD *)(a3 + 68);
    *(_BYTE *)(i + 72) = *(_BYTE *)(a3 + 72);
    *(_BYTE *)(i + 73) = *(_BYTE *)(a3 + 73);
    *(_BYTE *)(i + 74) = *(_BYTE *)(a3 + 74);
    *(_DWORD *)(i + 76) = *(_DWORD *)(a3 + 76);
    result = *(_DWORD *)(a3 + 80);
    *(_DWORD *)(i + 80) = result;
  }
  return result;
}
