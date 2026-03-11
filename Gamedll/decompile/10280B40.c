/*
 * func-name: sub_10280B40
 * func-address: 0x10280b40
 * callers: 0x10001a9b
 * callees: none
 */

int __stdcall sub_10280B40(void *Source, int a2, void *Destination)
{
  if ( (a2 - (int)Source) >> 2 )
    memmove_s(Destination, 4 * ((a2 - (int)Source) >> 2), Source, 4 * ((a2 - (int)Source) >> 2));
  return (int)Destination + 4 * ((a2 - (int)Source) >> 2);
}
