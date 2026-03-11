/*
 * func-name: sub_10252210
 * func-address: 0x10252210
 * callers: 0x1000e971
 * callees: none
 */

int __cdecl sub_10252210(int a1, int a2, int a3)
{
  int i; // esi
  int result; // eax

  for ( i = a1; i != a2; *(_BYTE *)(i - 4) = *(_BYTE *)(a3 + 52) )
  {
    *(_DWORD *)i = *(_DWORD *)a3;
    std::wstring::operator=(i + 4, a3 + 4);
    *(_DWORD *)(i + 32) = *(_DWORD *)(a3 + 32);
    *(float *)(i + 36) = *(float *)(a3 + 36);
    i += 56;
    *(float *)(i - 16) = *(float *)(a3 + 40);
    *(_DWORD *)(i - 12) = *(_DWORD *)(a3 + 44);
    result = *(_DWORD *)(a3 + 48);
    *(_DWORD *)(i - 8) = result;
  }
  return result;
}
