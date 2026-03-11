/*
 * func-name: sub_100144E0
 * func-address: 0x100144e0
 * callers: 0x10013f50
 * callees: none
 */

int __cdecl sub_100144E0(_DWORD *a1, int a2)
{
  if ( a2 == 15 )
    return 0;
  if ( a2 == 18 || a2 == 41 )
  {
    *a1 = sub_10014520;
    return 28;
  }
  else
  {
    *a1 = sub_10014D60;
    return -1;
  }
}
