/*
 * func-name: sub_100141B0
 * func-address: 0x100141b0
 * callers: none
 * callees: none
 */

int __thiscall sub_100141B0(_DWORD *this, int a2, int a3)
{
  int result; // eax

  if ( a2 )
    return 0;
  switch ( a3 )
  {
    case 0:
    case 5:
      result = this[2];
      break;
    case 1:
    case 2:
      result = this[1];
      break;
    default:
      return 0;
  }
  return result;
}
