/*
 * func-name: sub_1014B990
 * func-address: 0x1014b990
 * callers: 0x1000f204
 * callees: none
 */

int __stdcall sub_1014B990(void *Source, int a2, void *Destination)
{
  if ( (a2 - (int)Source) >> 2 )
    memmove_s(Destination, 4 * ((a2 - (int)Source) >> 2), Source, 4 * ((a2 - (int)Source) >> 2));
  return (int)Destination + 4 * ((a2 - (int)Source) >> 2);
}
