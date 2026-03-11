/*
 * func-name: sub_1029B190
 * func-address: 0x1029b190
 * callers: 0x100184c1
 * callees: 0x100152a3
 */

int __cdecl sub_1029B190(int a1, int a2, int a3)
{
  int i; // esi
  int result; // eax

  for ( i = a1; i != a2; i += 60 )
  {
    std::wstring::operator=(i, a3);
    *(_BYTE *)(i + 28) = *(_BYTE *)(a3 + 28);
    *(_DWORD *)(i + 32) = *(_DWORD *)(a3 + 32);
    *(_DWORD *)(i + 36) = *(_DWORD *)(a3 + 36);
    *(_DWORD *)(i + 40) = *(_DWORD *)(a3 + 40);
    result = sub_100152A3(a3 + 44);
  }
  return result;
}
