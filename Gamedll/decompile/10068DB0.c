/*
 * func-name: sub_10068DB0
 * func-address: 0x10068db0
 * callers: 0x1000d9ea
 * callees: none
 */

int __thiscall sub_10068DB0(_DWORD *this)
{
  int result; // eax

  result = this[1];
  if ( result )
    return (this[2] - result) / 36;
  return result;
}
