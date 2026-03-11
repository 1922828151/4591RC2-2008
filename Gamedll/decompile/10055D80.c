/*
 * func-name: sub_10055D80
 * func-address: 0x10055d80
 * callers: 0x10019b00
 * callees: none
 */

int __stdcall sub_10055D80(void *Source, int a2, void *Destination)
{
  if ( (a2 - (int)Source) >> 2 )
    memmove_s(Destination, 4 * ((a2 - (int)Source) >> 2), Source, 4 * ((a2 - (int)Source) >> 2));
  return (int)Destination + 4 * ((a2 - (int)Source) >> 2);
}
