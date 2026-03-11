/*
 * func-name: sub_1004A0B0
 * func-address: 0x1004a0b0
 * callers: 0x10011bd0
 * callees: 0x10013723, 0x1001a28f
 */

char __thiscall sub_1004A0B0(_DWORD *this, unsigned int a2)
{
  int v4; // eax
  int v5; // [esp+0h] [ebp-8h]
  int v6; // [esp+4h] [ebp-4h]

  this[1] = 0;
  this[2] = 0;
  this[3] = 0;
  if ( !a2 )
    return 0;
  if ( a2 > 0x3FFFFFF )
    sub_1001A28F(v5, v6);
  v4 = sub_10013723(a2);
  this[1] = v4;
  this[2] = v4;
  this[3] = v4 + (a2 << 6);
  return 1;
}
