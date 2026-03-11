/*
 * func-name: sub_1025F150
 * func-address: 0x1025f150
 * callers: 0x1000e96c
 * callees: none
 */

int __stdcall sub_1025F150(void *Source, int a2, void *Destination)
{
  if ( (a2 - (int)Source) >> 2 )
    memmove_s(Destination, 4 * ((a2 - (int)Source) >> 2), Source, 4 * ((a2 - (int)Source) >> 2));
  return (int)Destination + 4 * ((a2 - (int)Source) >> 2);
}
