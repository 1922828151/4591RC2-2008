/*
 * func-name: sub_10216530
 * func-address: 0x10216530
 * callers: 0x1001203a
 * callees: none
 */

int __stdcall sub_10216530(void *Source, int a2, void *Destination)
{
  if ( (a2 - (int)Source) >> 2 )
    memmove_s(Destination, 4 * ((a2 - (int)Source) >> 2), Source, 4 * ((a2 - (int)Source) >> 2));
  return (int)Destination + 4 * ((a2 - (int)Source) >> 2);
}
