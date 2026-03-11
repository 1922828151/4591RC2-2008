/*
 * func-name: sub_100031B0
 * func-address: 0x100031b0
 * callers: 0x10003150, 0x100099e0, 0x1000bee0, 0x10018f30
 * callees: 0x10002960, 0x10003220
 */

int __userpurge sub_100031B0@<eax>(_BYTE *a1@<edi>, int a2)
{
  *(_BYTE *)a2 = *a1;
  *(_DWORD *)(a2 + 8) = sub_10002960();
  *(_DWORD *)(a2 + 12) = 0;
  *(_DWORD *)(a2 + 20) = 0;
  *(_DWORD *)(a2 + 24) = 0;
  *(_DWORD *)(a2 + 28) = 0;
  sub_10003220(a2, a1);
  return a2;
}
