/*
 * func-name: sub_1000DA50
 * func-address: 0x1000da50
 * callers: none
 * callees: none
 */

int __stdcall sub_1000DA50(int a1, int a2)
{
  int result; // eax

  if ( a1 )
    return 0;
  switch ( a2 )
  {
    case 0:
      result = 4;
      break;
    case 1:
    case 2:
    case 3:
      result = 1;
      break;
    case 4:
      result = 2;
      break;
    default:
      return 0;
  }
  return result;
}
