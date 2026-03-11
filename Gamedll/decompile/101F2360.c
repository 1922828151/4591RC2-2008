/*
 * func-name: sub_101F2360
 * func-address: 0x101f2360
 * callers: 0x1001721a
 * callees: none
 */

int __thiscall sub_101F2360(_DWORD *this)
{
  int result; // eax

  result = this[1];
  if ( result )
    return (this[2] - result) / 60;
  return result;
}
