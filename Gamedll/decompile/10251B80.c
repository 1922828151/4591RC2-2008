/*
 * func-name: sub_10251B80
 * func-address: 0x10251b80
 * callers: 0x1000d8a5
 * callees: none
 */

int __cdecl sub_10251B80(int a1, int a2)
{
  int result; // eax

  if ( a1 )
  {
    *(_DWORD *)a1 = *(_DWORD *)a2;
    std::wstring::wstring(a1 + 4, a2 + 4);
    *(_DWORD *)(a1 + 32) = *(_DWORD *)(a2 + 32);
    *(float *)(a1 + 36) = *(float *)(a2 + 36);
    *(float *)(a1 + 40) = *(float *)(a2 + 40);
    result = *(_DWORD *)(a2 + 44);
    *(_DWORD *)(a1 + 44) = result;
    *(_DWORD *)(a1 + 48) = *(_DWORD *)(a2 + 48);
    *(_BYTE *)(a1 + 52) = *(_BYTE *)(a2 + 52);
  }
  return result;
}
