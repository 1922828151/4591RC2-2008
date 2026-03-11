/*
 * func-name: sub_1000B3B0
 * func-address: 0x1000b3b0
 * callers: 0x1000ab40
 * callees: 0x1000b6e0, 0x1000b790
 */

int __stdcall sub_1000B3B0(int a1, int a2, int a3)
{
  int v3; // esi
  int result; // eax

  v3 = sub_1000B6E0(a3, *(_DWORD *)(a3 + 4));
  result = sub_1000B790();
  *(_DWORD *)(a3 + 4) = v3;
  **(_DWORD **)(v3 + 4) = v3;
  return result;
}
