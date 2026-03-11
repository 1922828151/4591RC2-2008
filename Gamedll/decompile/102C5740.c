/*
 * func-name: sub_102C5740
 * func-address: 0x102c5740
 * callers: 0x102c5900
 * callees: none
 */

int __stdcall sub_102C5740(void *Source, int a2, void *Destination)
{
  if ( (a2 - (int)Source) >> 2 )
    memmove_s(Destination, 4 * ((a2 - (int)Source) >> 2), Source, 4 * ((a2 - (int)Source) >> 2));
  return (int)Destination + 4 * ((a2 - (int)Source) >> 2);
}
