/*
 * func-name: sub_101B9140
 * func-address: 0x101b9140
 * callers: 0x101b83c0
 * callees: 0x10108d30, 0x101a2500
 */

void __cdecl sub_101B9140()
{
  if ( dword_11240FFC )
  {
    sub_10108D30((int)dword_11240FFC, dword_11241000);
    operator delete(dword_11240FFC);
  }
  dword_11240FFC = 0;
  dword_11241000 = 0;
  dword_11241004 = 0;
}
