/*
 * func-name: sub_10019190
 * func-address: 0x10019190
 * callers: 0x10016bf0, 0x10016ca0, 0x10016e40, 0x10016e90, 0x10025eb0, 0x100261f0, 0x100262f0, 0x1002c790, 0x10036040, 0x10036650, 0x100367a0
 * callees: 0x100355d0, 0x1004e870
 */

int __stdcall sub_10019190(_DWORD *a1)
{
  int result; // eax

  if ( a1[5] )
    operator delete(a1[5]);
  a1[5] = 0;
  a1[6] = 0;
  a1[7] = 0;
  sub_100355D0();
  result = operator delete(a1[2]);
  a1[2] = 0;
  return result;
}
