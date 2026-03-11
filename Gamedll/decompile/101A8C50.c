/*
 * func-name: sub_101A8C50
 * func-address: 0x101a8c50
 * callers: 0x10012d7d
 * callees: none
 */

int __stdcall sub_101A8C50(void *Source, int a2, void *Destination)
{
  if ( (a2 - (int)Source) >> 2 )
    memmove_s(Destination, 4 * ((a2 - (int)Source) >> 2), Source, 4 * ((a2 - (int)Source) >> 2));
  return (int)Destination + 4 * ((a2 - (int)Source) >> 2);
}
