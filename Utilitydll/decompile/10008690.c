/*
 * func-name: sub_10008690
 * func-address: 0x10008690
 * callers: 0x100086c0
 * callees: 0x10008fb0, 0x10018b90
 */

int __userpurge sub_10008690@<eax>(int a1@<eax>, int a2, int a3, int a4)
{
  int v4; // esi
  int result; // eax

  v4 = sub_10018B90(a4, *(_DWORD *)(a4 + 4), a1);
  result = sub_10008FB0();
  *(_DWORD *)(a4 + 4) = v4;
  **(_DWORD **)(v4 + 4) = v4;
  return result;
}
