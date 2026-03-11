/*
 * func-name: sub_100485F0
 * func-address: 0x100485f0
 * callers: 0x10022fa0
 * callees: 0x10015170, 0x100490f0
 */

int __userpurge sub_100485F0@<eax>(_BYTE *a1@<edi>, int a2)
{
  *(_BYTE *)a2 = *a1;
  *(_DWORD *)(a2 + 8) = sub_10015170();
  *(_DWORD *)(a2 + 12) = 0;
  *(_DWORD *)(a2 + 20) = 0;
  *(_DWORD *)(a2 + 24) = 0;
  *(_DWORD *)(a2 + 28) = 0;
  sub_100490F0(a2, a1);
  return a2;
}
