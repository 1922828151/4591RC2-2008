/*
 * func-name: sub_101B8AF0
 * func-address: 0x101b8af0
 * callers: 0x101b7d50
 * callees: 0x101a2500
 */

void __cdecl sub_101B8AF0()
{
  if ( Destination )
    operator delete(Destination);
  Destination = 0;
  dword_10284758 = 0;
  dword_1028475C = 0;
}
