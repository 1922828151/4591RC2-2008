/*
 * func-name: sub_10023FA0
 * func-address: 0x10023fa0
 * callers: 0x10022970, 0x10022a50, 0x10023210
 * callees: 0x10024e20, 0x1004e870
 */

int __stdcall sub_10023FA0(_DWORD *a1)
{
  int result; // eax

  if ( a1[5] )
    operator delete(a1[5]);
  a1[5] = 0;
  a1[6] = 0;
  a1[7] = 0;
  sub_10024E20(a1 + 1);
  result = operator delete(a1[2]);
  a1[2] = 0;
  return result;
}
