/*
 * func-name: sub_101A8C90
 * func-address: 0x101a8c90
 * callers: 0x10009994
 * callees: none
 */

int __stdcall sub_101A8C90(void *Source, int a2, void *Destination)
{
  if ( (a2 - (int)Source) >> 2 )
    memmove_s(Destination, 4 * ((a2 - (int)Source) >> 2), Source, 4 * ((a2 - (int)Source) >> 2));
  return (int)Destination + 4 * ((a2 - (int)Source) >> 2);
}
