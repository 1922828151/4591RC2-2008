/*
 * func-name: sub_10010480
 * func-address: 0x10010480
 * callers: 0x10011b40
 * callees: 0x10010540, 0x100108f0
 */

int __userpurge sub_10010480@<eax>(_BYTE *a1@<edi>, int a2)
{
  *(_BYTE *)a2 = *a1;
  *(_DWORD *)(a2 + 8) = sub_100108F0();
  *(_DWORD *)(a2 + 12) = 0;
  *(_DWORD *)(a2 + 20) = 0;
  *(_DWORD *)(a2 + 24) = 0;
  *(_DWORD *)(a2 + 28) = 0;
  sub_10010540(a2, a1);
  return a2;
}
