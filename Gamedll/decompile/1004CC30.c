/*
 * func-name: sub_1004CC30
 * func-address: 0x1004cc30
 * callers: 0x1000425f
 * callees: none
 */

int __stdcall sub_1004CC30(void *Source, int a2, void *Destination)
{
  if ( (a2 - (int)Source) >> 2 )
    memmove_s(Destination, 4 * ((a2 - (int)Source) >> 2), Source, 4 * ((a2 - (int)Source) >> 2));
  return (int)Destination + 4 * ((a2 - (int)Source) >> 2);
}
