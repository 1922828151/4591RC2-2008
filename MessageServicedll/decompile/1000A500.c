/*
 * func-name: sub_1000A500
 * func-address: 0x1000a500
 * callers: 0x10007360
 * callees: none
 */

char *__thiscall sub_1000A500(char *Destination, int a2, void *Source, int a4, int a5)
{
  char *v5; // esi

  v5 = &Destination[4 * ((a5 - (int)Source) >> 2)];
  if ( (a5 - (int)Source) >> 2 )
    memmove_s(Destination, 4 * ((a5 - (int)Source) >> 2), Source, 4 * ((a5 - (int)Source) >> 2));
  return v5;
}
