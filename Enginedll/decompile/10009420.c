/*
 * func-name: sub_10009420
 * func-address: 0x10009420
 * callers: 0x100edc30
 * callees: none
 */

int __thiscall sub_10009420(_DWORD *this)
{
  int result; // eax

  result = this[1];
  if ( result )
    return (this[2] - result) / 124;
  return result;
}
