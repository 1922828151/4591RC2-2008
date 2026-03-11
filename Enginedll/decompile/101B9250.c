/*
 * func-name: sub_101B9250
 * func-address: 0x101b9250
 * callers: 0x101b8640
 * callees: 0x100901e0, 0x101a2500
 */

void __cdecl sub_101B9250()
{
  if ( dword_112415C8 )
    operator delete(dword_112415C8);
  dword_112415C8 = 0;
  dword_112415CC = 0;
  dword_112415D0 = 0;
  sub_100901E0(&dword_112415B8);
  operator delete(dword_112415BC);
  dword_112415BC = 0;
}
