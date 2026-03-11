/*
 * func-name: sub_1002BC00
 * func-address: 0x1002bc00
 * callers: 0x100076b2
 * callees: 0x1000c42d, 0x1001461e
 */

char __thiscall sub_1002BC00(_DWORD *this, unsigned int a2)
{
  int v4; // eax
  int v5; // [esp+0h] [ebp-8h]
  int v6; // [esp+4h] [ebp-4h]

  this[1] = 0;
  this[2] = 0;
  this[3] = 0;
  if ( !a2 )
    return 0;
  if ( a2 > 0x9249249 )
    sub_1001461E(v5, v6);
  v4 = sub_1000C42D(a2);
  this[1] = v4;
  this[2] = v4;
  this[3] = v4 + 28 * a2;
  return 1;
}
