/*
 * func-name: sub_10010750
 * func-address: 0x10010750
 * callers: 0x10010cb0
 * callees: 0x10010980, 0x10014170
 */

int __userpurge sub_10010750@<eax>(int a1@<eax>, int a2, int a3, int a4)
{
  int v4; // esi
  int result; // eax

  v4 = sub_10010980(a4, *(_DWORD *)(a4 + 4), a1);
  result = sub_10014170(1, a2);
  *(_DWORD *)(a4 + 4) = v4;
  **(_DWORD **)(v4 + 4) = v4;
  return result;
}
