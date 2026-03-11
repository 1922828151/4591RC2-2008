/*
 * func-name: sub_10002840
 * func-address: 0x10002840
 * callers: 0x100012e0
 * callees: 0x100029f0, 0x10009f70
 */

int __userpurge sub_10002840@<eax>(_BYTE *a1@<edi>, int a2)
{
  *(_BYTE *)a2 = *a1;
  *(_DWORD *)(a2 + 8) = sub_10009F70();
  *(_DWORD *)(a2 + 12) = 0;
  *(_DWORD *)(a2 + 20) = 0;
  *(_DWORD *)(a2 + 24) = 0;
  *(_DWORD *)(a2 + 28) = 0;
  sub_100029F0(a2, a1);
  return a2;
}
