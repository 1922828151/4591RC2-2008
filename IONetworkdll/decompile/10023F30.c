/*
 * func-name: sub_10023F30
 * func-address: 0x10023f30
 * callers: 0x10022970
 * callees: 0x10024980, 0x1002bfb0
 */

int __userpurge sub_10023F30@<eax>(_BYTE *a1@<edi>, int a2)
{
  *(_BYTE *)a2 = *a1;
  *(_DWORD *)(a2 + 8) = sub_1002BFB0();
  *(_DWORD *)(a2 + 12) = 0;
  *(_DWORD *)(a2 + 20) = 0;
  *(_DWORD *)(a2 + 24) = 0;
  *(_DWORD *)(a2 + 28) = 0;
  sub_10024980(a2, a1);
  return a2;
}
