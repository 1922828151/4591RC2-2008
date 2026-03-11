/*
 * func-name: sub_101A9000
 * func-address: 0x101a9000
 * callers: 0x10009bdd
 * callees: none
 */

int __stdcall sub_101A9000(void *Source, int a2, void *Destination)
{
  if ( (a2 - (int)Source) >> 2 )
    memmove_s(Destination, 4 * ((a2 - (int)Source) >> 2), Source, 4 * ((a2 - (int)Source) >> 2));
  return (int)Destination + 4 * ((a2 - (int)Source) >> 2);
}
