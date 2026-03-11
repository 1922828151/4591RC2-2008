/*
 * func-name: sub_10256DA0
 * func-address: 0x10256da0
 * callers: 0x10005e7f
 * callees: none
 */

int __stdcall sub_10256DA0(void *Source, int a2, void *Destination)
{
  if ( (a2 - (int)Source) >> 2 )
    memmove_s(Destination, 4 * ((a2 - (int)Source) >> 2), Source, 4 * ((a2 - (int)Source) >> 2));
  return (int)Destination + 4 * ((a2 - (int)Source) >> 2);
}
