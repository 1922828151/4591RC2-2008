/*
 * func-name: sub_101B90B0
 * func-address: 0x101b90b0
 * callers: 0x101b8390
 * callees: 0x100f78a0, 0x101a2500
 */

void __cdecl sub_101B90B0()
{
  if ( dword_11240DC4 )
    operator delete(dword_11240DC4);
  dword_11240DC4 = 0;
  dword_11240DC8 = 0;
  dword_11240DCC = 0;
  sub_100F78A0(&dword_11240DB4);
  operator delete(dword_11240DB8);
  dword_11240DB8 = 0;
}
