/*
 * func-name: sub_100058C0
 * func-address: 0x100058c0
 * callers: 0x10002810
 * callees: 0x100067f0, 0x10007690
 */

int __userpurge sub_100058C0@<eax>(_BYTE *a1@<edi>, int a2)
{
  *(_BYTE *)a2 = *a1;
  *(_DWORD *)(a2 + 8) = sub_10007690();
  *(_DWORD *)(a2 + 12) = 0;
  *(_DWORD *)(a2 + 20) = 0;
  *(_DWORD *)(a2 + 24) = 0;
  *(_DWORD *)(a2 + 28) = 0;
  sub_100067F0(a2, a1);
  return a2;
}
