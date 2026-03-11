/*
 * func-name: sub_1004FEC0
 * func-address: 0x1004fec0
 * callers: 0x100131ba
 * callees: none
 */

int __thiscall sub_1004FEC0(_DWORD *this)
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
