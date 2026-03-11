/*
 * func-name: sub_10054220
 * func-address: 0x10054220
 * callers: 0x1000fc54
 * callees: none
 */

int __stdcall sub_10054220(int a1, void *Source, int a3, int a4, void *Destination)
{
  if ( (a4 - (int)Source) >> 2 )
    memmove_s(Destination, 4 * ((a4 - (int)Source) >> 2), Source, 4 * ((a4 - (int)Source) >> 2));
  return (int)Destination + 4 * ((a4 - (int)Source) >> 2);
}
