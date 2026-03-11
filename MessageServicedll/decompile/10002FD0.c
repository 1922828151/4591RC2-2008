/*
 * func-name: sub_10002FD0
 * func-address: 0x10002fd0
 * callers: 0x10002ee0
 * callees: 0x100030a0, 0x1000bbb0
 */

int __userpurge sub_10002FD0@<eax>(int a1@<eax>, int a2, int a3, int a4)
{
  int v4; // esi
  int result; // eax

  v4 = sub_100030A0(a4, *(_DWORD *)(a4 + 4), a1);
  result = sub_1000BBB0(1, a2);
  *(_DWORD *)(a4 + 4) = v4;
  **(_DWORD **)(v4 + 4) = v4;
  return result;
}
