/*
 * func-name: sub_1014A760
 * func-address: 0x1014a760
 * callers: 0x100065d7
 * callees: none
 */

int __stdcall sub_1014A760(void *Source, int a2, void *Destination)
{
  if ( (a2 - (int)Source) >> 2 )
    memmove_s(Destination, 4 * ((a2 - (int)Source) >> 2), Source, 4 * ((a2 - (int)Source) >> 2));
  return (int)Destination + 4 * ((a2 - (int)Source) >> 2);
}
