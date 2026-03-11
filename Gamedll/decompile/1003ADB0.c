/*
 * func-name: sub_1003ADB0
 * func-address: 0x1003adb0
 * callers: 0x1000abf5
 * callees: none
 */

int __thiscall sub_1003ADB0(_DWORD *this)
{
  int result; // eax

  result = this[1];
  if ( result )
    return (this[2] - result) / 20;
  return result;
}
