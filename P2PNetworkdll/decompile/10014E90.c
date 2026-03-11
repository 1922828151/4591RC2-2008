/*
 * func-name: sub_10014E90
 * func-address: 0x10014e90
 * callers: none
 * callees: none
 */

int __cdecl sub_10014E90(int a1, _BYTE *a2)
{
  char v3; // al

  if ( *a2 == 0xED )
    return ((unsigned __int8)a2[1] >> 5) & 1;
  if ( *a2 == 0xEF && a2[1] == 0xBF )
  {
    v3 = a2[2];
    if ( v3 == -65 || v3 == -66 )
      return 1;
  }
  return 0;
}
