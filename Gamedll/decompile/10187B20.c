/*
 * func-name: sub_10187B20
 * func-address: 0x10187b20
 * callers: 0x1000c482
 * callees: none
 */

char *__cdecl sub_10187B20(void *Source, int a2, char *Destination)
{
  int v3; // eax
  char *v4; // esi

  v3 = (a2 - (int)Source) >> 2;
  v4 = &Destination[4 * v3];
  if ( v3 > 0 )
    memmove_s(Destination, 4 * v3, Source, 4 * v3);
  return v4;
}
