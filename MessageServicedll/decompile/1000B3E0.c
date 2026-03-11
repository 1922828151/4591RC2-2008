/*
 * func-name: sub_1000B3E0
 * func-address: 0x1000b3e0
 * callers: 0x1000ac30
 * callees: 0x1000b8c0, 0x1000b980
 */

int __stdcall sub_1000B3E0(int a1, int a2, int a3)
{
  int v3; // esi
  int result; // eax

  v3 = sub_1000B8C0(a3, *(_DWORD *)(a3 + 4));
  result = sub_1000B980(1, a1);
  *(_DWORD *)(a3 + 4) = v3;
  **(_DWORD **)(v3 + 4) = v3;
  return result;
}
