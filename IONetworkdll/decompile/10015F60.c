/*
 * func-name: sub_10015F60
 * func-address: 0x10015f60
 * callers: 0x10015e70
 * callees: 0x10016000, 0x100160b0
 */

int __userpurge sub_10015F60@<eax>(int a1@<eax>, int a2, int a3, int a4)
{
  int v4; // esi
  int result; // eax

  v4 = sub_10016000(a4, *(_DWORD *)(a4 + 4), a1);
  result = sub_100160B0();
  *(_DWORD *)(a4 + 4) = v4;
  **(_DWORD **)(v4 + 4) = v4;
  return result;
}
