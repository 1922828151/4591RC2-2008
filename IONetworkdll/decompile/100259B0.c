/*
 * func-name: sub_100259B0
 * func-address: 0x100259b0
 * callers: 0x10025750
 * callees: 0x100160b0, 0x10025c20
 */

int __stdcall sub_100259B0(int a1, int a2, int a3)
{
  int v3; // esi
  int result; // eax

  v3 = sub_10025C20(a3, *(_DWORD *)(a3 + 4));
  result = sub_100160B0(1u, a1);
  *(_DWORD *)(a3 + 4) = v3;
  **(_DWORD **)(v3 + 4) = v3;
  return result;
}
