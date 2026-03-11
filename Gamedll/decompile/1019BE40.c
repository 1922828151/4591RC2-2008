/*
 * func-name: sub_1019BE40
 * func-address: 0x1019be40
 * callers: 0x100145ba
 * callees: none
 */

int __stdcall sub_1019BE40(void *Source, int a2, void *Destination)
{
  if ( (a2 - (int)Source) >> 2 )
    memmove_s(Destination, 4 * ((a2 - (int)Source) >> 2), Source, 4 * ((a2 - (int)Source) >> 2));
  return (int)Destination + 4 * ((a2 - (int)Source) >> 2);
}
