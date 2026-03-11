/*
 * func-name: sub_101E4090
 * func-address: 0x101e4090
 * callers: 0x1000a83f
 * callees: none
 */

int __thiscall sub_101E4090(_DWORD *this)
{
  int result; // eax

  result = this[1];
  if ( result )
    return (this[2] - result) / 28;
  return result;
}
