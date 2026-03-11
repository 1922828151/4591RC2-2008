/*
 * func-name: sub_101D8300
 * func-address: 0x101d8300
 * callers: 0x1000f682
 * callees: none
 */

int __thiscall sub_101D8300(_DWORD *this)
{
  int result; // eax

  result = this[1];
  if ( result )
    return (this[2] - result) / 84;
  return result;
}
