/*
 * func-name: sub_100B5150
 * func-address: 0x100b5150
 * callers: 0x1000981d
 * callees: none
 */

int __stdcall sub_100B5150(void *Source, int a2, void *Destination)
{
  if ( (a2 - (int)Source) >> 2 )
    memmove_s(Destination, 4 * ((a2 - (int)Source) >> 2), Source, 4 * ((a2 - (int)Source) >> 2));
  return (int)Destination + 4 * ((a2 - (int)Source) >> 2);
}
