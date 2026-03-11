/*
 * func-name: sub_1004CA80
 * func-address: 0x1004ca80
 * callers: 0x100119d7
 * callees: none
 */

int __stdcall sub_1004CA80(void *Source, int a2, void *Destination)
{
  if ( (a2 - (int)Source) >> 2 )
    memmove_s(Destination, 4 * ((a2 - (int)Source) >> 2), Source, 4 * ((a2 - (int)Source) >> 2));
  return (int)Destination + 4 * ((a2 - (int)Source) >> 2);
}
