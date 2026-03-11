/*
 * func-name: sub_100142A0
 * func-address: 0x100142a0
 * callers: none
 * callees: none
 */

int __stdcall sub_100142A0(int a1, int a2)
{
  int result; // eax

  if ( a1 )
    return 0;
  switch ( a2 )
  {
    case 0:
    case 1:
    case 2:
      result = 12;
      break;
    case 5:
      result = 4;
      break;
    default:
      return 0;
  }
  return result;
}
