/*
 * func-name: sub_10014A00
 * func-address: 0x10014a00
 * callers: 0x1000df50
 * callees: 0x10014eb0, 0x10015170
 */

int __userpurge sub_10014A00@<eax>(_BYTE *a1@<edi>, int a2)
{
  *(_BYTE *)a2 = *a1;
  *(_DWORD *)(a2 + 8) = sub_10015170();
  *(_DWORD *)(a2 + 12) = 0;
  *(_DWORD *)(a2 + 20) = 0;
  *(_DWORD *)(a2 + 24) = 0;
  *(_DWORD *)(a2 + 28) = 0;
  sub_10014EB0(a2, a1);
  return a2;
}
