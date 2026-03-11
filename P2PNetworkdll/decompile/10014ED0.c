/*
 * func-name: sub_10014ED0
 * func-address: 0x10014ed0
 * callers: none
 * callees: none
 */

BOOL __cdecl sub_10014ED0(int a1, _BYTE *a2)
{
  return *a2 == 0xF4 && (a2[1] & 0x30) != 0;
}
