/*
 * func-name: sub_100141F0
 * func-address: 0x100141f0
 * callers: none
 * callees: none
 */

int __stdcall sub_100141F0(int a1, int a2)
{
  int result; // eax

  if ( a1 )
    return 0;
  switch ( a2 )
  {
    case 0:
    case 5:
      result = 4;
      break;
    case 1:
    case 2:
      result = 1;
      break;
    default:
      return 0;
  }
  return result;
}
