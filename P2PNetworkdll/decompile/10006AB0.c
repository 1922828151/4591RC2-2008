/*
 * func-name: sub_10006AB0
 * func-address: 0x10006ab0
 * callers: 0x10002630
 * callees: 0x10007e60, 0x10008840
 */

int __userpurge sub_10006AB0@<eax>(_BYTE *a1@<edi>, int a2)
{
  *(_BYTE *)a2 = *a1;
  *(_DWORD *)(a2 + 8) = sub_10008840();
  *(_DWORD *)(a2 + 12) = 0;
  *(_DWORD *)(a2 + 20) = 0;
  *(_DWORD *)(a2 + 24) = 0;
  *(_DWORD *)(a2 + 28) = 0;
  sub_10007E60(a2, a1);
  return a2;
}
