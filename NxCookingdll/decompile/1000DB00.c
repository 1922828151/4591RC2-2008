/*
 * func-name: sub_1000DB00
 * func-address: 0x1000db00
 * callers: none
 * callees: none
 */

int __stdcall sub_1000DB00(int a1, int a2)
{
  int result; // eax

  if ( a1 )
    return 0;
  switch ( a2 )
  {
    case 0:
    case 1:
    case 2:
    case 3:
      result = 12;
      break;
    default:
      return 0;
  }
  return result;
}
