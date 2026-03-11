/*
 * func-name: sub_1004A720
 * func-address: 0x1004a720
 * callers: 0x1004a630
 * callees: 0x1004a810, 0x1004a8c0
 */

int __userpurge sub_1004A720@<eax>(int a1@<eax>, int a2, int a3, int a4)
{
  int v4; // esi
  int result; // eax

  v4 = sub_1004A810(a4, *(_DWORD *)(a4 + 4), a1);
  result = sub_1004A8C0(1, a2);
  *(_DWORD *)(a4 + 4) = v4;
  **(_DWORD **)(v4 + 4) = v4;
  return result;
}
