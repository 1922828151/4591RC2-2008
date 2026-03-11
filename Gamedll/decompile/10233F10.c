/*
 * func-name: sub_10233F10
 * func-address: 0x10233f10
 * callers: 0x1000c6d5
 * callees: none
 */

int __stdcall sub_10233F10(void *Source, int a2, void *Destination)
{
  if ( (a2 - (int)Source) >> 2 )
    memmove_s(Destination, 4 * ((a2 - (int)Source) >> 2), Source, 4 * ((a2 - (int)Source) >> 2));
  return (int)Destination + 4 * ((a2 - (int)Source) >> 2);
}
