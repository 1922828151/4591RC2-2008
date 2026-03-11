/*
 * func-name: sub_10013D70
 * func-address: 0x10013d70
 * callers: 0x10013ba0, 0x10013c70
 * callees: none
 */

int __cdecl sub_10013D70(_DWORD *a1, int a2)
{
  if ( a2 == 15 )
    return 0;
  if ( a2 == 18 || a2 == 41 )
  {
    *a1 = sub_10013DB0;
    return 3;
  }
  else
  {
    *a1 = sub_10014D60;
    return -1;
  }
}
