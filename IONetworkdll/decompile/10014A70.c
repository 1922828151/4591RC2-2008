/*
 * func-name: sub_10014A70
 * func-address: 0x10014a70
 * callers: 0x1000df50, 0x1000e1c0, 0x1003c620, 0x1003c700
 * callees: 0x100150e0, 0x1004e870
 */

int __stdcall sub_10014A70(_DWORD *a1)
{
  int result; // eax

  if ( a1[5] )
    operator delete(a1[5]);
  a1[5] = 0;
  a1[6] = 0;
  a1[7] = 0;
  sub_100150E0();
  result = operator delete(a1[2]);
  a1[2] = 0;
  return result;
}
