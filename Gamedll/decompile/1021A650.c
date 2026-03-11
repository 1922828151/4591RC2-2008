/*
 * func-name: sub_1021A650
 * func-address: 0x1021a650
 * callers: 0x10012a85
 * callees: none
 */

bool __stdcall sub_1021A650(int a1)
{
  int v1; // eax

  v1 = *(_DWORD *)(a1 + 8);
  return v1 == 2 || v1 == 4 || v1 == 3;
}
