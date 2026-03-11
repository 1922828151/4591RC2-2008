/*
 * func-name: sub_10280940
 * func-address: 0x10280940
 * callers: 0x1000e507
 * callees: none
 */

int __stdcall sub_10280940(void *Source, int a2, void *Destination)
{
  if ( (a2 - (int)Source) >> 2 )
    memmove_s(Destination, 4 * ((a2 - (int)Source) >> 2), Source, 4 * ((a2 - (int)Source) >> 2));
  return (int)Destination + 4 * ((a2 - (int)Source) >> 2);
}
