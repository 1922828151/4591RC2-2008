/*
 * func-name: sub_10051D40
 * func-address: 0x10051d40
 * callers: 0x10053de0, 0x10053f70, 0x10146e00, 0x10147110
 * callees: none
 */

int __thiscall sub_10051D40(_DWORD *this)
{
  int result; // eax

  result = this[1];
  if ( result )
    return (this[2] - result) / 112;
  return result;
}
