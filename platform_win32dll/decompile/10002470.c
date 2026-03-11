/*
 * func-name: sub_10002470
 * func-address: 0x10002470
 * callers: none
 * callees: none
 */

char __thiscall sub_10002470(_BYTE *this, int a2)
{
  char result; // al

  switch ( a2 )
  {
    case 400:
      result = this[6656] >> 7;
      break;
    case 401:
      result = this[6657] >> 7;
      break;
    case 402:
      result = this[6658] >> 7;
      break;
    case 403:
      result = this[6659] >> 7;
      break;
    default:
      Error("Invalid mouse state requested in DXInput class");
      result = 0;
      break;
  }
  return result;
}
