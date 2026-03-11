/*
 * func-name: sub_10052810
 * func-address: 0x10052810
 * callers: 0x100134da
 * callees: none
 */

char *__cdecl sub_10052810(int a1, void *Source, int a3, int a4, char *Destination)
{
  int v5; // eax
  char *v6; // esi

  v5 = (a4 - (int)Source) >> 2;
  v6 = &Destination[4 * v5];
  if ( v5 > 0 )
    memmove_s(Destination, 4 * v5, Source, 4 * v5);
  return v6;
}
