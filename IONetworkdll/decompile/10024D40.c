/*
 * func-name: sub_10024D40
 * func-address: 0x10024d40
 * callers: 0x10025840
 * callees: 0x10025100, 0x100251b0
 */

int __userpurge sub_10024D40@<eax>(int a1@<eax>, int a2, int a3, int a4)
{
  int v4; // esi
  int result; // eax

  v4 = sub_10025100(a4, *(_DWORD *)(a4 + 4), a1);
  result = sub_100251B0();
  *(_DWORD *)(a4 + 4) = v4;
  **(_DWORD **)(v4 + 4) = v4;
  return result;
}
