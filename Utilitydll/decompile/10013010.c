/*
 * func-name: sub_10013010
 * func-address: 0x10013010
 * callers: 0x10011e80
 * callees: 0x100108f0, 0x10013c70
 */

int __userpurge sub_10013010@<eax>(_BYTE *a1@<edi>, int a2)
{
  *(_BYTE *)a2 = *a1;
  *(_DWORD *)(a2 + 8) = sub_100108F0();
  *(_DWORD *)(a2 + 12) = 0;
  *(_DWORD *)(a2 + 20) = 0;
  *(_DWORD *)(a2 + 24) = 0;
  *(_DWORD *)(a2 + 28) = 0;
  sub_10013C70(a2, a1);
  return a2;
}
