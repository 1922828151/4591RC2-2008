/*
 * func-name: sub_10007640
 * func-address: 0x10007640
 * callers: 0x10004d00
 * callees: 0x10009320, 0x10009f70
 */

int __userpurge sub_10007640@<eax>(_BYTE *a1@<edi>, int a2)
{
  *(_BYTE *)a2 = *a1;
  *(_DWORD *)(a2 + 8) = sub_10009F70();
  *(_DWORD *)(a2 + 12) = 0;
  *(_DWORD *)(a2 + 20) = 0;
  *(_DWORD *)(a2 + 24) = 0;
  *(_DWORD *)(a2 + 28) = 0;
  sub_10009320(a2, a1);
  return a2;
}
