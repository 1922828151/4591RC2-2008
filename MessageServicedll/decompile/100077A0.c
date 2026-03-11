/*
 * func-name: sub_100077A0
 * func-address: 0x100077a0
 * callers: 0x100051d0
 * callees: 0x10009780, 0x1000a130
 */

int __userpurge sub_100077A0@<eax>(_BYTE *a1@<edi>, int a2)
{
  *(_BYTE *)a2 = *a1;
  *(_DWORD *)(a2 + 8) = sub_1000A130();
  *(_DWORD *)(a2 + 12) = 0;
  *(_DWORD *)(a2 + 20) = 0;
  *(_DWORD *)(a2 + 24) = 0;
  *(_DWORD *)(a2 + 28) = 0;
  sub_10009780(a2, a1);
  return a2;
}
