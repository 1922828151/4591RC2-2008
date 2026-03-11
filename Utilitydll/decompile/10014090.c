/*
 * func-name: sub_10014090
 * func-address: 0x10014090
 * callers: 0x10014920
 * callees: 0x10014170, 0x100143b0
 */

int __userpurge sub_10014090@<eax>(int a1@<eax>, int a2, int a3, int a4)
{
  int v4; // esi
  int result; // eax

  v4 = sub_100143B0(a4, *(_DWORD *)(a4 + 4), a1);
  result = sub_10014170(1, a2);
  *(_DWORD *)(a4 + 4) = v4;
  **(_DWORD **)(v4 + 4) = v4;
  return result;
}
