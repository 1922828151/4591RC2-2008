/*
 * func-name: sub_10126510
 * func-address: 0x10126510
 * callers: 0x100ff160, 0x101163a0, 0x10127420
 * callees: none
 */

int __thiscall sub_10126510(_DWORD *this)
{
  int result; // eax

  result = this[1];
  if ( result )
    return (this[2] - result) / 60;
  return result;
}
