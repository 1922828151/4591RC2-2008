/*
 * func-name: sub_103058F0
 * func-address: 0x103058f0
 * callers: 0x103037c0
 * callees: 0x10005d26, 0x102c9d50
 */

void __cdecl sub_103058F0()
{
  if ( dword_103B5E00 )
    operator delete(dword_103B5E00);
  dword_103B5E00 = 0;
  dword_103B5E04 = 0;
  dword_103B5E08 = 0;
  sub_10005D26();
  operator delete(dword_103B5DF4);
  dword_103B5DF4 = 0;
}
