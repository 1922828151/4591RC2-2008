/*
 * func-name: sub_1001A820
 * func-address: 0x1001a820
 * callers: none
 * callees: none
 */

int __thiscall sub_1001A820(SOCKET *this)
{
  int result; // eax

  result = this[34];
  if ( result != -1 )
  {
    result = closesocket(this[34]);
    this[34] = -1;
  }
  return result;
}
