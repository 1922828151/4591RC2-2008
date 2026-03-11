/*
 * func-name: sub_10002380
 * func-address: 0x10002380
 * callers: none
 * callees: none
 */

char __thiscall sub_10002380(_BYTE *this, int a2, char a3)
{
  char result; // al

  result = a2 + 112;
  switch ( a2 )
  {
    case 400:
      result = a3;
      this[6640] = a3;
      break;
    case 401:
      this[6641] = a3;
      break;
    case 402:
      result = a3;
      this[6642] = a3;
      break;
    case 403:
      this[6643] = a3;
      break;
    default:
      result = Error("Invalid mouse state requested in DXInput class");
      break;
  }
  return result;
}
