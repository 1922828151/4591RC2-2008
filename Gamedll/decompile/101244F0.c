/*
 * func-name: sub_101244F0
 * func-address: 0x101244f0
 * callers: 0x10011694
 * callees: none
 */

int __stdcall sub_101244F0(void *Source, int a2, void *Destination)
{
  if ( (a2 - (int)Source) >> 2 )
    memmove_s(Destination, 4 * ((a2 - (int)Source) >> 2), Source, 4 * ((a2 - (int)Source) >> 2));
  return (int)Destination + 4 * ((a2 - (int)Source) >> 2);
}
