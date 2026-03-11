/*
 * func-name: sub_10124570
 * func-address: 0x10124570
 * callers: 0x100192d1
 * callees: none
 */

int __stdcall sub_10124570(void *Source, int a2, void *Destination)
{
  if ( (a2 - (int)Source) >> 2 )
    memmove_s(Destination, 4 * ((a2 - (int)Source) >> 2), Source, 4 * ((a2 - (int)Source) >> 2));
  return (int)Destination + 4 * ((a2 - (int)Source) >> 2);
}
