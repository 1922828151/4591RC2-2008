/*
 * func-name: sub_1002A450
 * func-address: 0x1002a450
 * callers: 0x10016ca0, 0x10025eb0, 0x1002c790
 * callees: 0x1002bd30, 0x1002bfb0
 */

int __userpurge sub_1002A450@<eax>(_BYTE *a1@<edi>, int a2)
{
  *(_BYTE *)a2 = *a1;
  *(_DWORD *)(a2 + 8) = sub_1002BFB0();
  *(_DWORD *)(a2 + 12) = 0;
  *(_DWORD *)(a2 + 20) = 0;
  *(_DWORD *)(a2 + 24) = 0;
  *(_DWORD *)(a2 + 28) = 0;
  sub_1002BD30(a2, a1);
  return a2;
}
