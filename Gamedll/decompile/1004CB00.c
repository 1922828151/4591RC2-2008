/*
 * func-name: sub_1004CB00
 * func-address: 0x1004cb00
 * callers: 0x1000944e
 * callees: none
 */

char *__cdecl sub_1004CB00(void *Source, int a2, char *Destination)
{
  int v3; // eax
  char *v4; // esi

  v3 = (a2 - (int)Source) >> 2;
  v4 = &Destination[4 * v3];
  if ( v3 > 0 )
    memmove_s(Destination, 4 * v3, Source, 4 * v3);
  return v4;
}
