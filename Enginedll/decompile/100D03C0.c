/*
 * func-name: sub_100D03C0
 * func-address: 0x100d03c0
 * callers: 0x100d2720, 0x1016ad30
 * callees: none
 */

int __stdcall sub_100D03C0(void *Source, int a2, void *Destination)
{
  if ( (a2 - (int)Source) >> 1 )
    memmove_s(Destination, 2 * ((a2 - (int)Source) >> 1), Source, 2 * ((a2 - (int)Source) >> 1));
  return (int)Destination + 2 * ((a2 - (int)Source) >> 1);
}
