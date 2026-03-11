/*
 * func-name: sub_10013D10
 * func-address: 0x10013d10
 * callers: 0x10013db0
 * callees: none
 */

int __cdecl sub_10013D10(_DWORD *a1, int a2)
{
  int result; // eax

  switch ( a2 )
  {
    case 11:
    case 13:
    case 15:
      result = 0;
      break;
    case 29:
      *a1 = sub_10014D60;
      result = 2;
      break;
    default:
      *a1 = sub_10014D60;
      result = -1;
      break;
  }
  return result;
}
