/*
 * func-name: sub_100076B0
 * func-address: 0x100076b0
 * callers: 0x100051d0
 * callees: 0x10009550, 0x1000a0a0
 */

int __userpurge sub_100076B0@<eax>(_BYTE *a1@<edi>, int a2)
{
  *(_BYTE *)a2 = *a1;
  *(_DWORD *)(a2 + 8) = sub_1000A0A0();
  *(_DWORD *)(a2 + 12) = 0;
  *(_DWORD *)(a2 + 20) = 0;
  *(_DWORD *)(a2 + 24) = 0;
  *(_DWORD *)(a2 + 28) = 0;
  sub_10009550(a2, a1);
  return a2;
}
