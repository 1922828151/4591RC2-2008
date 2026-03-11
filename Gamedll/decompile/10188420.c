/*
 * func-name: sub_10188420
 * func-address: 0x10188420
 * callers: 0x1001311a
 * callees: none
 */

int __stdcall sub_10188420(void *Source, int a2, void *Destination)
{
  if ( (a2 - (int)Source) >> 2 )
    memmove_s(Destination, 4 * ((a2 - (int)Source) >> 2), Source, 4 * ((a2 - (int)Source) >> 2));
  return (int)Destination + 4 * ((a2 - (int)Source) >> 2);
}
