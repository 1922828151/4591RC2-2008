/*
 * func-name: sub_1004CB40
 * func-address: 0x1004cb40
 * callers: 0x1000758b
 * callees: none
 */

int __stdcall sub_1004CB40(void *Source, int a2, void *Destination)
{
  if ( (a2 - (int)Source) >> 2 )
    memmove_s(Destination, 4 * ((a2 - (int)Source) >> 2), Source, 4 * ((a2 - (int)Source) >> 2));
  return (int)Destination + 4 * ((a2 - (int)Source) >> 2);
}
