/*
 * func-name: sub_102C5780
 * func-address: 0x102c5780
 * callers: 0x102c5ac0
 * callees: none
 */

int __stdcall sub_102C5780(void *Source, int a2, void *Destination)
{
  if ( (a2 - (int)Source) >> 3 )
    memmove_s(Destination, 8 * ((a2 - (int)Source) >> 3), Source, 8 * ((a2 - (int)Source) >> 3));
  return (int)Destination + 8 * ((a2 - (int)Source) >> 3);
}
