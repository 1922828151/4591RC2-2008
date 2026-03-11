/*
 * func-name: sub_100B4F80
 * func-address: 0x100b4f80
 * callers: 0x10010451
 * callees: none
 */

int __cdecl sub_100B4F80(void *Source, int a2, int a3)
{
  int v3; // eax
  int v4; // esi

  v3 = (a2 - (int)Source) >> 2;
  v4 = a3 - 4 * v3;
  if ( v3 > 0 )
    memmove_s((void *const)(a3 - 4 * v3), 4 * v3, Source, 4 * v3);
  return v4;
}
