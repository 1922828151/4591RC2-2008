/*
 * func-name: sub_10048740
 * func-address: 0x10048740
 * callers: 0x10042700, 0x10042a30, 0x1004a940, 0x1004aa10
 * callees: 0x1004a160, 0x1004e870
 */

int __stdcall sub_10048740(_DWORD *a1)
{
  int result; // eax

  if ( a1[5] )
    operator delete(a1[5]);
  a1[5] = 0;
  a1[6] = 0;
  a1[7] = 0;
  sub_1004A160(a1 + 1);
  result = operator delete(a1[2]);
  a1[2] = 0;
  return result;
}
