/*
 * func-name: sub_100024E0
 * func-address: 0x100024e0
 * callers: none
 * callees: none
 */

char __thiscall sub_100024E0(_BYTE *this, unsigned int a2, int a3)
{
  char result; // al

  if ( a2 > 3 )
    return 0;
  switch ( a3 )
  {
    case 40000:
      result = this[80 * a2 + 6708] >> 7;
      break;
    case 40001:
      result = this[80 * a2 + 6709] >> 7;
      break;
    case 40002:
      result = this[80 * a2 + 6710] >> 7;
      break;
    case 40003:
      result = this[80 * a2 + 6711] >> 7;
      break;
    case 40004:
      result = this[80 * a2 + 6712] >> 7;
      break;
    case 40005:
      result = this[80 * a2 + 6713] >> 7;
      break;
    case 40006:
      result = this[80 * a2 + 6714] >> 7;
      break;
    case 40007:
      result = this[80 * a2 + 6715] >> 7;
      break;
    case 40008:
      result = this[80 * a2 + 6716] >> 7;
      break;
    case 40009:
      result = this[80 * a2 + 6717] >> 7;
      break;
    case 40010:
      result = this[80 * a2 + 6718] >> 7;
      break;
    case 40011:
      result = this[80 * a2 + 6719] >> 7;
      break;
    default:
      Error("Invalid joystick state requested in DXInput class");
      return 0;
  }
  return result;
}
