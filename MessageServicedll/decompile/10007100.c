/*
 * func-name: sub_10007100
 * func-address: 0x10007100
 * callers: 0x10003bf0, 0x10003d80, 0x10004910
 * callees: 0x10008860, 0x1000a130
 */

int __userpurge sub_10007100@<eax>(_BYTE *a1@<edi>, int a2)
{
  *(_BYTE *)a2 = *a1;
  *(_DWORD *)(a2 + 8) = sub_1000A130();
  *(_DWORD *)(a2 + 12) = 0;
  *(_DWORD *)(a2 + 20) = 0;
  *(_DWORD *)(a2 + 24) = 0;
  *(_DWORD *)(a2 + 28) = 0;
  sub_10008860(a2, a1);
  return a2;
}
