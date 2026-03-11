/*
 * func-name: sub_1000DAA0
 * func-address: 0x1000daa0
 * callers: none
 * callees: none
 */

int __thiscall sub_1000DAA0(_DWORD *this, int a2, int a3)
{
  int result; // eax

  if ( a2 )
    return 0;
  switch ( a3 )
  {
    case 0:
      result = this[41];
      break;
    case 1:
    case 3:
      result = this[43];
      break;
    case 2:
      result = this[44];
      break;
    case 4:
      result = *(_DWORD *)(this[59] + 40);
      break;
    default:
      return 0;
  }
  return result;
}
