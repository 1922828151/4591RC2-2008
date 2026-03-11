/*
 * func-name: sub_10023C40
 * func-address: 0x10023c40
 * callers: 0x10023520, 0x10024bb0, 0x10024e20
 * callees: 0x10025040, 0x1004e870
 */

int __stdcall sub_10023C40(int a1)
{
  int result; // eax

  sub_10025040(a1 + 4);
  result = operator delete(*(_DWORD *)(a1 + 8));
  *(_DWORD *)(a1 + 8) = 0;
  return result;
}
