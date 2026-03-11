/*
 * func-name: sub_1000B4E0
 * func-address: 0x1000b4e0
 * callers: 0x1000af00
 * callees: 0x1000bb00, 0x1000bbb0
 */

int __userpurge sub_1000B4E0@<eax>(int a1@<eax>, int a2, int a3, int a4)
{
  int v4; // esi
  int result; // eax

  v4 = sub_1000BB00(a4, *(_DWORD *)(a4 + 4), a1);
  result = sub_1000BBB0(1, a2);
  *(_DWORD *)(a4 + 4) = v4;
  **(_DWORD **)(v4 + 4) = v4;
  return result;
}
