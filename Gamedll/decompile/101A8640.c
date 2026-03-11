/*
 * func-name: sub_101A8640
 * func-address: 0x101a8640
 * callers: 0x10015320
 * callees: none
 */

int __cdecl sub_101A8640(void *Source, int a2, int a3)
{
  int v3; // eax
  int v4; // esi

  v3 = (a2 - (int)Source) >> 2;
  v4 = a3 - 4 * v3;
  if ( v3 > 0 )
    memmove_s((void *const)(a3 - 4 * v3), 4 * v3, Source, 4 * v3);
  return v4;
}
