/*
 * func-name: sub_100C8ED0
 * func-address: 0x100c8ed0
 * callers: 0x10018741
 * callees: none
 */

int __stdcall sub_100C8ED0(void *Source, int a2, void *Destination)
{
  if ( (a2 - (int)Source) >> 1 )
    memmove_s(Destination, 2 * ((a2 - (int)Source) >> 1), Source, 2 * ((a2 - (int)Source) >> 1));
  return (int)Destination + 2 * ((a2 - (int)Source) >> 1);
}
