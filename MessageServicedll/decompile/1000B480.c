/*
 * func-name: sub_1000B480
 * func-address: 0x1000b480
 * callers: 0x1000ad20
 * callees: 0x1000b810, 0x1001dec0
 */

int __userpurge sub_1000B480@<eax>(int a1@<eax>, int a2, int a3, int a4)
{
  int v4; // esi
  int result; // eax

  v4 = sub_1000B810(a4, *(_DWORD *)(a4 + 4), a1);
  result = sub_1001DEC0(1, a2);
  *(_DWORD *)(a4 + 4) = v4;
  **(_DWORD **)(v4 + 4) = v4;
  return result;
}
