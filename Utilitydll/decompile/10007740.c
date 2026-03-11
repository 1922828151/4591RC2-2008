/*
 * func-name: sub_10007740
 * func-address: 0x10007740
 * callers: 0x10008a80
 * callees: 0x10007820, 0x10007f30
 */

int __userpurge sub_10007740@<eax>(int a1@<eax>, int a2, int a3, int a4)
{
  int v4; // esi
  int result; // eax

  v4 = sub_10007F30(a4, *(_DWORD *)(a4 + 4), a1);
  result = sub_10007820();
  *(_DWORD *)(a4 + 4) = v4;
  **(_DWORD **)(v4 + 4) = v4;
  return result;
}
