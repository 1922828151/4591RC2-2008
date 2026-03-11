/*
 * func-name: sub_10290F20
 * func-address: 0x10290f20
 * callers: 0x10011941
 * callees: none
 */

int __cdecl sub_10290F20(void *Source, int a2, int a3)
{
  int v3; // eax
  int v4; // esi

  v3 = (a2 - (int)Source) >> 2;
  v4 = a3 - 4 * v3;
  if ( v3 > 0 )
    memmove_s((void *const)(a3 - 4 * v3), 4 * v3, Source, 4 * v3);
  return v4;
}
