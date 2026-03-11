/*
 * func-name: sub_1008EAA0
 * func-address: 0x1008eaa0
 * callers: 0x10013e76
 * callees: none
 */

int __stdcall sub_1008EAA0(void *Source, int a2, void *Destination)
{
  if ( (a2 - (int)Source) >> 2 )
    memmove_s(Destination, 4 * ((a2 - (int)Source) >> 2), Source, 4 * ((a2 - (int)Source) >> 2));
  return (int)Destination + 4 * ((a2 - (int)Source) >> 2);
}
