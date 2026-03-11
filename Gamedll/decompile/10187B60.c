/*
 * func-name: sub_10187B60
 * func-address: 0x10187b60
 * callers: 0x10016914
 * callees: none
 */

int __stdcall sub_10187B60(void *Source, int a2, void *Destination)
{
  if ( (a2 - (int)Source) >> 2 )
    memmove_s(Destination, 4 * ((a2 - (int)Source) >> 2), Source, 4 * ((a2 - (int)Source) >> 2));
  return (int)Destination + 4 * ((a2 - (int)Source) >> 2);
}
