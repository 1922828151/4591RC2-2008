/*
 * func-name: sub_1002C0C0
 * func-address: 0x1002c0c0
 * callers: 0x1000db90, 0x1000dbf0, 0x10014a00, 0x10014a70, 0x10019190, 0x10023f30, 0x10023fa0, 0x10024740, 0x10024870, 0x100248f0, 0x1002a450, 0x1002ba30, 0x100328d0, 0x10033240, 0x10034dc0, 0x10035540, 0x1003d9a0, 0x1003dba0, 0x10046860, 0x100485f0, 0x10048660, 0x100486d0, 0x10048740, 0x10049f60, 0x1004a040, 0x1004db40
 * callees: 0x1004e870
 */

int __usercall sub_1002C0C0@<eax>(_DWORD *a1@<esi>)
{
  int result; // eax

  result = a1[1];
  if ( result )
    result = operator delete(a1[1]);
  a1[1] = 0;
  a1[2] = 0;
  a1[3] = 0;
  return result;
}
