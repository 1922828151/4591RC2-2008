/*
 * func-name: sub_102C50E0
 * func-address: 0x102c50e0
 * callers: none
 * callees: none
 */

char *__cdecl sub_102C50E0(void *Source, int a2, char *Destination)
{
  int v3; // eax
  char *v4; // esi

  v3 = (a2 - (int)Source) >> 2;
  v4 = &Destination[4 * v3];
  if ( v3 > 0 )
    memmove_s(Destination, 4 * v3, Source, 4 * v3);
  return v4;
}
