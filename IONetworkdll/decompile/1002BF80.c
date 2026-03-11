/*
 * func-name: sub_1002BF80
 * func-address: 0x1002bf80
 * callers: 0x1002c6a0
 * callees: 0x1002c040, 0x10035f10
 */

int __userpurge sub_1002BF80@<eax>(int a1@<eax>, int a2, int a3, int a4)
{
  int v4; // esi
  int result; // eax

  v4 = sub_10035F10(a4, *(_DWORD *)(a4 + 4), a1);
  result = sub_1002C040(1, a2);
  *(_DWORD *)(a4 + 4) = v4;
  **(_DWORD **)(v4 + 4) = v4;
  return result;
}
