/*
 * func-name: sub_101A85D0
 * func-address: 0x101a85d0
 * callers: 0x10019b0a
 * callees: none
 */

int __stdcall sub_101A85D0(void *Source, int a2, void *Destination)
{
  if ( (a2 - (int)Source) >> 2 )
    memmove_s(Destination, 4 * ((a2 - (int)Source) >> 2), Source, 4 * ((a2 - (int)Source) >> 2));
  return (int)Destination + 4 * ((a2 - (int)Source) >> 2);
}
