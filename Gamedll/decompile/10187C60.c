/*
 * func-name: sub_10187C60
 * func-address: 0x10187c60
 * callers: 0x10014281
 * callees: none
 */

int __stdcall sub_10187C60(void *Source, int a2, void *Destination)
{
  if ( (a2 - (int)Source) >> 2 )
    memmove_s(Destination, 4 * ((a2 - (int)Source) >> 2), Source, 4 * ((a2 - (int)Source) >> 2));
  return (int)Destination + 4 * ((a2 - (int)Source) >> 2);
}
