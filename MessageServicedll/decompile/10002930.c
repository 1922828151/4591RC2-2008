/*
 * func-name: sub_10002930
 * func-address: 0x10002930
 * callers: 0x10002d90
 * callees: 0x10002c00, 0x1000ba00
 */

int __userpurge sub_10002930@<eax>(int a1@<eax>, int a2, int a3, int a4)
{
  int v4; // esi
  int result; // eax

  v4 = sub_10002C00(a4, *(_DWORD *)(a4 + 4), a1);
  result = sub_1000BA00();
  *(_DWORD *)(a4 + 4) = v4;
  **(_DWORD **)(v4 + 4) = v4;
  return result;
}
