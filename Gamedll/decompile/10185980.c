/*
 * func-name: sub_10185980
 * func-address: 0x10185980
 * callers: 0x100025ef
 * callees: none
 */

int __cdecl sub_10185980(int a1, int a2, int a3)
{
  int i; // esi
  int result; // eax

  for ( i = a1; i != a2; *(float *)(i - 4) = *(float *)(a3 + 76) )
  {
    std::string::operator=(i, a3);
    std::string::operator=(i + 28, a3 + 28);
    result = *(_DWORD *)(a3 + 56);
    *(_DWORD *)(i + 56) = result;
    *(float *)(i + 60) = *(float *)(a3 + 60);
    *(_BYTE *)(i + 64) = *(_BYTE *)(a3 + 64);
    *(float *)(i + 68) = *(float *)(a3 + 68);
    i += 80;
    *(float *)(i - 8) = *(float *)(a3 + 72);
  }
  return result;
}
