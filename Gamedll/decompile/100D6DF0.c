/*
 * func-name: sub_100D6DF0
 * func-address: 0x100d6df0
 * callers: 0x10019dcb
 * callees: none
 */

int __stdcall sub_100D6DF0(void *Source, int a2, void *Destination)
{
  if ( (a2 - (int)Source) >> 2 )
    memmove_s(Destination, 4 * ((a2 - (int)Source) >> 2), Source, 4 * ((a2 - (int)Source) >> 2));
  return (int)Destination + 4 * ((a2 - (int)Source) >> 2);
}
