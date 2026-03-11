/*
 * func-name: sub_102C50B0
 * func-address: 0x102c50b0
 * callers: 0x102c5ac0
 * callees: none
 */

int __cdecl sub_102C50B0(void *Source, int a2, int a3)
{
  int v3; // eax
  int v4; // esi

  v3 = (a2 - (int)Source) >> 3;
  v4 = a3 - 8 * v3;
  if ( v3 > 0 )
    memmove_s((void *const)(a3 - 8 * v3), 8 * v3, Source, 8 * v3);
  return v4;
}
