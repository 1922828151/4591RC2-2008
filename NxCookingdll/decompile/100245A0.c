/*
 * func-name: sub_100245A0
 * func-address: 0x100245a0
 * callers: 0x10024620, 0x10024710
 * callees: 0x10001430, 0x10014930
 */

char __cdecl sub_100245A0(int (__stdcall ***a1)(int, int, int, int, int), int a2)
{
  int v3; // [esp+4h] [ebp-4h] BYREF

  if ( !byte_1005B460 )
  {
    byte_1005B460 = 1;
    if ( !dword_1005B464 )
    {
      dword_1005B464 = sub_10001430(34078720, a2, a1, &v3);
      if ( !dword_1005B464 )
        return 0;
      if ( a1 )
      {
        dword_100567DC = (int)a1;
        sub_10014930((int)&off_100567D8);
      }
      dword_1005B1D0 = 0;
      *(float *)&dword_1005B1D4 = 0.025;
      LOBYTE(dword_1005B1D8) = 0;
    }
  }
  return 1;
}
