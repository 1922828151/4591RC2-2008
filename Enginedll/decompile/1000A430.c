/*
 * func-name: sub_1000A430
 * func-address: 0x1000a430
 * callers: 0x10012f30, 0x100640a0
 * callees: none
 */

int __thiscall sub_1000A430(_DWORD *this)
{
  int result; // eax

  result = this[1];
  if ( result )
    return (this[2] - result) / 140;
  return result;
}
