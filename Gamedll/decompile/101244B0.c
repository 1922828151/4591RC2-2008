/*
 * func-name: sub_101244B0
 * func-address: 0x101244b0
 * callers: 0x1000f6ff
 * callees: none
 */

char *__cdecl sub_101244B0(void *Source, int a2, char *Destination)
{
  int v3; // eax
  char *v4; // esi

  v3 = (a2 - (int)Source) >> 2;
  v4 = &Destination[4 * v3];
  if ( v3 > 0 )
    memmove_s(Destination, 4 * v3, Source, 4 * v3);
  return v4;
}
