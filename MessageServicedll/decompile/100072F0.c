/*
 * func-name: sub_100072F0
 * func-address: 0x100072f0
 * callers: 0x10003f00
 * callees: 0x10008b40, 0x10009c30
 */

int __userpurge sub_100072F0@<eax>(_BYTE *a1@<edi>, int a2)
{
  *(_BYTE *)a2 = *a1;
  *(_DWORD *)(a2 + 8) = sub_10009C30();
  *(_DWORD *)(a2 + 12) = 0;
  *(_DWORD *)(a2 + 20) = 0;
  *(_DWORD *)(a2 + 24) = 0;
  *(_DWORD *)(a2 + 28) = 0;
  sub_10008B40(a2, a1);
  return a2;
}
