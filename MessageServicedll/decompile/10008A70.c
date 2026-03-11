/*
 * func-name: sub_10008A70
 * func-address: 0x10008a70
 * callers: 0x10016160
 * callees: none
 */

int __thiscall sub_10008A70(_DWORD *this)
{
  int result; // eax

  result = this[1];
  if ( result )
    return (this[2] - result) / 108;
  return result;
}
