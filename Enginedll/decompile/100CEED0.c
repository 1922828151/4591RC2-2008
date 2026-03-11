/*
 * func-name: sub_100CEED0
 * func-address: 0x100ceed0
 * callers: 0x100d2720, 0x1016ad30
 * callees: none
 */

int __cdecl sub_100CEED0(void *Source, int a2, int a3)
{
  int v3; // eax
  int v4; // esi

  v3 = (a2 - (int)Source) >> 1;
  v4 = a3 - 2 * v3;
  if ( v3 > 0 )
    memmove_s((void *const)(a3 - 2 * v3), 2 * v3, Source, 2 * v3);
  return v4;
}
