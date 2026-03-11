/*
 * func-name: sub_100146C0
 * func-address: 0x100146c0
 * callers: 0x10014650
 * callees: none
 */

int __cdecl sub_100146C0(_DWORD *a1, int a2)
{
  switch ( a2 )
  {
    case 15:
      return 0;
    case 21:
      *a1 = sub_10014650;
      return 0;
    case 24:
      *a1 = sub_100147A0;
      return 0;
    default:
      *a1 = sub_10014D60;
      return -1;
  }
}
