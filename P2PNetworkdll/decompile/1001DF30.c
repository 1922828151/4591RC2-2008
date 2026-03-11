/*
 * func-name: sub_1001DF30
 * func-address: 0x1001df30
 * callers: 0x1001df70, 0x1001e290
 * callees: none
 */

int __usercall sub_1001DF30@<eax>(int a1@<eax>)
{
  int result; // eax

  switch ( a1 )
  {
    case 9:
    case 10:
    case 13:
    case 32:
      result = 1;
      break;
    default:
      result = 0;
      break;
  }
  return result;
}
