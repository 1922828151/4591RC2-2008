/*
 * func-name: sub_10014730
 * func-address: 0x10014730
 * callers: 0x10014700, 0x10014760
 * callees: none
 */

int __cdecl sub_10014730(_DWORD *a1, int a2)
{
  if ( a2 == 15 )
    return 0;
  if ( a2 == 18 )
  {
    *a1 = sub_10014760;
    return 27;
  }
  else
  {
    *a1 = sub_10014D60;
    return -1;
  }
}
