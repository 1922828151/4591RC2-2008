/*
 * func-name: sub_10002630
 * func-address: 0x10002630
 * callers: none
 * callees: none
 */

char __thiscall sub_10002630(_BYTE *this, unsigned int a2, int a3)
{
  char result; // al

  if ( a2 > 3 )
    return 0;
  switch ( a3 )
  {
    case 40000:
      result = this[80 * a2 + 7028] >> 7;
      break;
    case 40001:
      result = this[80 * a2 + 7029] >> 7;
      break;
    case 40002:
      result = this[80 * a2 + 7030] >> 7;
      break;
    case 40003:
      result = this[80 * a2 + 7031] >> 7;
      break;
    case 40004:
      result = this[80 * a2 + 7032] >> 7;
      break;
    case 40005:
      result = this[80 * a2 + 7033] >> 7;
      break;
    case 40006:
      result = this[80 * a2 + 7034] >> 7;
      break;
    case 40007:
      result = this[80 * a2 + 7035] >> 7;
      break;
    case 40008:
      result = this[80 * a2 + 7036] >> 7;
      break;
    case 40009:
      result = this[80 * a2 + 7037] >> 7;
      break;
    case 40010:
      result = this[80 * a2 + 7038] >> 7;
      break;
    case 40011:
      result = this[80 * a2 + 7039] >> 7;
      break;
    default:
      Error("Invalid joystick state requested in DXInput class");
      return 0;
  }
  return result;
}
