/*
 * func-name: sub_1025F190
 * func-address: 0x1025f190
 * callers: 0x1000fc72
 * callees: none
 */

int __stdcall sub_1025F190(void *Source, int a2, void *Destination)
{
  if ( (a2 - (int)Source) >> 2 )
    memmove_s(Destination, 4 * ((a2 - (int)Source) >> 2), Source, 4 * ((a2 - (int)Source) >> 2));
  return (int)Destination + 4 * ((a2 - (int)Source) >> 2);
}
