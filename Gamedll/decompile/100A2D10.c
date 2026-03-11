/*
 * func-name: sub_100A2D10
 * func-address: 0x100a2d10
 * callers: 0x10004061
 * callees: 0x10005501, 0x1000b785
 */

char __thiscall sub_100A2D10(_DWORD *this, unsigned int a2)
{
  int v4; // eax
  int v5; // [esp+0h] [ebp-8h]
  int v6; // [esp+4h] [ebp-4h]

  this[1] = 0;
  this[2] = 0;
  this[3] = 0;
  if ( !a2 )
    return 0;
  if ( a2 > 0x4924924 )
    sub_1000B785(v5, v6);
  v4 = sub_10005501(a2);
  this[1] = v4;
  this[2] = v4;
  this[3] = v4 + 56 * a2;
  return 1;
}
