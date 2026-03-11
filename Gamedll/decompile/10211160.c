/*
 * func-name: sub_10211160
 * func-address: 0x10211160
 * callers: 0x100100aa
 * callees: none
 */

int __stdcall sub_10211160(void *Source, int a2, void *Destination)
{
  if ( (a2 - (int)Source) >> 2 )
    memmove_s(Destination, 4 * ((a2 - (int)Source) >> 2), Source, 4 * ((a2 - (int)Source) >> 2));
  return (int)Destination + 4 * ((a2 - (int)Source) >> 2);
}
