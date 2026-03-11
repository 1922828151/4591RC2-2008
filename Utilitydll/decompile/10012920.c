/*
 * func-name: sub_10012920
 * func-address: 0x10012920
 * callers: 0x10010f50
 * callees: 0x100139b0, 0x10013f60
 */

int __userpurge sub_10012920@<eax>(_BYTE *a1@<edi>, int a2)
{
  *(_BYTE *)a2 = *a1;
  *(_DWORD *)(a2 + 8) = sub_10013F60();
  *(_DWORD *)(a2 + 12) = 0;
  *(_DWORD *)(a2 + 20) = 0;
  *(_DWORD *)(a2 + 24) = 0;
  *(_DWORD *)(a2 + 28) = 0;
  sub_100139B0(a2, a1);
  return a2;
}
