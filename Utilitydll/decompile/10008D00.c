/*
 * func-name: sub_10008D00
 * func-address: 0x10008d00
 * callers: 0x10008950
 * callees: 0x10007820, 0x10008e50
 */

int __stdcall sub_10008D00(int a1, int a2, int a3)
{
  int v3; // esi
  int result; // eax

  v3 = sub_10008E50(a3, *(_DWORD *)(a3 + 4));
  result = sub_10007820(1u, a1);
  *(_DWORD *)(a3 + 4) = v3;
  **(_DWORD **)(v3 + 4) = v3;
  return result;
}
