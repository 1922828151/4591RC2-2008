/*
 * func-name: sub_10005D20
 * func-address: 0x10005d20
 * callers: 0x100036a0
 * callees: 0x10006fd0, 0x10007690
 */

int __userpurge sub_10005D20@<eax>(_BYTE *a1@<edi>, int a2)
{
  *(_BYTE *)a2 = *a1;
  *(_DWORD *)(a2 + 8) = sub_10007690();
  *(_DWORD *)(a2 + 12) = 0;
  *(_DWORD *)(a2 + 20) = 0;
  *(_DWORD *)(a2 + 24) = 0;
  *(_DWORD *)(a2 + 28) = 0;
  sub_10006FD0(a2, a1);
  return a2;
}
