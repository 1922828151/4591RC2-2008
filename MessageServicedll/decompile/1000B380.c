/*
 * func-name: sub_1000B380
 * func-address: 0x1000b380
 * callers: 0x1000aa50
 * callees: 0x1000b630, 0x1001dec0
 */

int __userpurge sub_1000B380@<eax>(int a1@<eax>, int a2, int a3, int a4)
{
  int v4; // esi
  int result; // eax

  v4 = sub_1000B630(a4, *(_DWORD *)(a4 + 4), a1);
  result = sub_1001DEC0(1, a2);
  *(_DWORD *)(a4 + 4) = v4;
  **(_DWORD **)(v4 + 4) = v4;
  return result;
}
