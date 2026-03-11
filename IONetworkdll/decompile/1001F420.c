/*
 * func-name: sub_1001F420
 * func-address: 0x1001f420
 * callers: none
 * callees: none
 */

int __thiscall sub_1001F420(SOCKET *this)
{
  int result; // eax

  result = this[20];
  if ( result != -1 )
  {
    result = closesocket(this[20]);
    this[20] = -1;
  }
  return result;
}
