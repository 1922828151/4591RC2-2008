/*
 * func-name: sub_1006CF70
 * func-address: 0x1006cf70
 * callers: 0x1005a2a0, 0x1005a850, 0x10070240
 * callees: none
 */

int __thiscall sub_1006CF70(_DWORD *this)
{
  int result; // eax
  bool v2; // zf

  result = this[4];
  if ( result )
  {
    v2 = result-- == 1;
    this[4] = result;
    if ( v2 )
      this[3] = 0;
  }
  return result;
}
