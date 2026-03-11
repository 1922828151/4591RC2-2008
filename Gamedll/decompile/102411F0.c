/*
 * func-name: sub_102411F0
 * func-address: 0x102411f0
 * callers: 0x1001a91f
 * callees: none
 */

int __stdcall sub_102411F0(void *Source, int a2, void *Destination)
{
  if ( (a2 - (int)Source) >> 2 )
    memmove_s(Destination, 4 * ((a2 - (int)Source) >> 2), Source, 4 * ((a2 - (int)Source) >> 2));
  return (int)Destination + 4 * ((a2 - (int)Source) >> 2);
}
