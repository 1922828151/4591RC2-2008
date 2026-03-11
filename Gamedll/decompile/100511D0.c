/*
 * func-name: sub_100511D0
 * func-address: 0x100511d0
 * callers: 0x1001a3d4
 * callees: none
 */

int __stdcall sub_100511D0(void *Source, int a2, void *Destination)
{
  if ( (a2 - (int)Source) >> 2 )
    memmove_s(Destination, 4 * ((a2 - (int)Source) >> 2), Source, 4 * ((a2 - (int)Source) >> 2));
  return (int)Destination + 4 * ((a2 - (int)Source) >> 2);
}
