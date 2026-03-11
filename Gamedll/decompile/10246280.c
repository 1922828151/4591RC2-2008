/*
 * func-name: sub_10246280
 * func-address: 0x10246280
 * callers: 0x1000fe3e
 * callees: none
 */

int __stdcall sub_10246280(void *Source, int a2, void *Destination)
{
  if ( (a2 - (int)Source) >> 2 )
    memmove_s(Destination, 4 * ((a2 - (int)Source) >> 2), Source, 4 * ((a2 - (int)Source) >> 2));
  return (int)Destination + 4 * ((a2 - (int)Source) >> 2);
}
