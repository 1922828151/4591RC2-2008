/*
 * func-name: sub_10291090
 * func-address: 0x10291090
 * callers: 0x10001203
 * callees: none
 */

int __stdcall sub_10291090(void *Source, int a2, void *Destination)
{
  if ( (a2 - (int)Source) >> 2 )
    memmove_s(Destination, 4 * ((a2 - (int)Source) >> 2), Source, 4 * ((a2 - (int)Source) >> 2));
  return (int)Destination + 4 * ((a2 - (int)Source) >> 2);
}
