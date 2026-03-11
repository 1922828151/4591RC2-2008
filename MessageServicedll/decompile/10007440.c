/*
 * func-name: sub_10007440
 * func-address: 0x10007440
 * callers: 0x10004010
 * callees: 0x10008df0, 0x10009d10
 */

int __userpurge sub_10007440@<eax>(_BYTE *a1@<edi>, int a2)
{
  *(_BYTE *)a2 = *a1;
  *(_DWORD *)(a2 + 8) = sub_10009D10();
  *(_DWORD *)(a2 + 12) = 0;
  *(_DWORD *)(a2 + 20) = 0;
  *(_DWORD *)(a2 + 24) = 0;
  *(_DWORD *)(a2 + 28) = 0;
  sub_10008DF0(a2, a1);
  return a2;
}
