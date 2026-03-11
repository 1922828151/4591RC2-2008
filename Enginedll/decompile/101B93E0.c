/*
 * func-name: sub_101B93E0
 * func-address: 0x101b93e0
 * callers: 0x101b8670
 * callees: 0x100901e0, 0x101a2500
 */

void __cdecl sub_101B93E0()
{
  if ( dword_112415F0 )
    operator delete(dword_112415F0);
  dword_112415F0 = 0;
  dword_112415F4 = 0;
  dword_112415F8 = 0;
  sub_100901E0(&dword_112415E0);
  operator delete(dword_112415E4);
  dword_112415E4 = 0;
}
