/*
 * func-name: sub_10024DF0
 * func-address: 0x10024df0
 * callers: 0x10025660
 * callees: 0x10025230, 0x1002c040
 */

int __userpurge sub_10024DF0@<eax>(int a1@<eax>, int a2, int a3, int a4)
{
  int v4; // esi
  int result; // eax

  v4 = sub_10025230(a4, *(_DWORD *)(a4 + 4), a1);
  result = sub_1002C040(1, a2);
  *(_DWORD *)(a4 + 4) = v4;
  **(_DWORD **)(v4 + 4) = v4;
  return result;
}
