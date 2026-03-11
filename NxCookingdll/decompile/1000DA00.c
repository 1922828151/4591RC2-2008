/*
 * func-name: sub_1000DA00
 * func-address: 0x1000da00
 * callers: none
 * callees: none
 */

int __thiscall sub_1000DA00(_DWORD *this, int a2, int a3)
{
  int result; // eax

  if ( a2 )
    return 0;
  switch ( a3 )
  {
    case 0:
      result = this[40];
      break;
    case 1:
    case 2:
    case 3:
      result = this[42];
      break;
    case 4:
      result = this[48];
      break;
    default:
      return 0;
  }
  return result;
}
