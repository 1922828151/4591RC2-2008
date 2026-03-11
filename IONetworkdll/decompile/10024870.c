/*
 * func-name: sub_10024870
 * func-address: 0x10024870
 * callers: 0x10022fa0, 0x10023150, 0x10046710
 * callees: 0x10024fb0, 0x1004e870
 */

int __stdcall sub_10024870(_DWORD *a1)
{
  int result; // eax

  if ( a1[5] )
    operator delete(a1[5]);
  a1[5] = 0;
  a1[6] = 0;
  a1[7] = 0;
  sub_10024FB0();
  result = operator delete(a1[2]);
  a1[2] = 0;
  return result;
}
