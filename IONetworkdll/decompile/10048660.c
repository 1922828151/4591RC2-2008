/*
 * func-name: sub_10048660
 * func-address: 0x10048660
 * callers: 0x10022fa0
 * callees: 0x10049b20, 0x1004a0d0
 */

int __userpurge sub_10048660@<eax>(_BYTE *a1@<edi>, int a2)
{
  *(_BYTE *)a2 = *a1;
  *(_DWORD *)(a2 + 8) = sub_1004A0D0();
  *(_DWORD *)(a2 + 12) = 0;
  *(_DWORD *)(a2 + 20) = 0;
  *(_DWORD *)(a2 + 24) = 0;
  *(_DWORD *)(a2 + 28) = 0;
  sub_10049B20(a2, a1);
  return a2;
}
