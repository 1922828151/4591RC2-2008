/*
 * func-name: sub_10002310
 * func-address: 0x10002310
 * callers: none
 * callees: none
 */

char __thiscall sub_10002310(_BYTE *this, int a2)
{
  char result; // al

  switch ( a2 )
  {
    case 400:
      result = this[6640] >> 7;
      break;
    case 401:
      result = this[6641] >> 7;
      break;
    case 402:
      result = this[6642] >> 7;
      break;
    case 403:
      result = this[6643] >> 7;
      break;
    default:
      Error("Invalid mouse state requested in DXInput class");
      result = 0;
      break;
  }
  return result;
}
