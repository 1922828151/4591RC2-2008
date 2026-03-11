/*
 * func-name: sub_10013EA0
 * func-address: 0x10013ea0
 * callers: 0x10014830
 * callees: 0x10013ff0, 0x10014260
 */

int __userpurge sub_10013EA0@<eax>(int a1@<eax>, int a2, int a3, int a4)
{
  int v4; // esi
  int result; // eax

  v4 = sub_10014260(a4, *(_DWORD *)(a4 + 4), a1);
  result = sub_10013FF0(1, a2);
  *(_DWORD *)(a4 + 4) = v4;
  **(_DWORD **)(v4 + 4) = v4;
  return result;
}
