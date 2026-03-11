/*
 * func-name: sub_10024D70
 * func-address: 0x10024d70
 * callers: 0x10023520, 0x10023c40, 0x10024ca0, 0x10024e20
 * callees: 0x10025040, 0x1004e870
 */

int __usercall sub_10024D70@<eax>(int a1@<esi>)
{
  int result; // eax

  sub_10025040(a1);
  result = operator delete(*(_DWORD *)(a1 + 4));
  *(_DWORD *)(a1 + 4) = 0;
  return result;
}
