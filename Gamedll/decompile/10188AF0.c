/*
 * func-name: sub_10188AF0
 * func-address: 0x10188af0
 * callers: 0x10008931
 * callees: none
 */

int __stdcall sub_10188AF0(void *Source, int a2, void *Destination)
{
  if ( (a2 - (int)Source) >> 2 )
    memmove_s(Destination, 4 * ((a2 - (int)Source) >> 2), Source, 4 * ((a2 - (int)Source) >> 2));
  return (int)Destination + 4 * ((a2 - (int)Source) >> 2);
}
