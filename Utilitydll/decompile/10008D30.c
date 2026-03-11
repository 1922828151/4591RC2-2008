/*
 * func-name: sub_10008D30
 * func-address: 0x10008d30
 * callers: 0x1000b550
 * callees: 0x10008f00, 0x10008fb0
 */

int __userpurge sub_10008D30@<eax>(int a1@<eax>, int a2, int a3, int a4)
{
  int v4; // esi
  int result; // eax

  v4 = sub_10008F00(a4, *(_DWORD *)(a4 + 4), a1);
  result = sub_10008FB0();
  *(_DWORD *)(a4 + 4) = v4;
  **(_DWORD **)(v4 + 4) = v4;
  return result;
}
