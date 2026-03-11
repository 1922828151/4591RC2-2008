/*
 * func-name: sub_1004A630
 * func-address: 0x1004a630
 * callers: 0x1000c27a
 * callees: 0x1000e930, 0x100144a7
 */

char __thiscall sub_1004A630(_DWORD *this, unsigned int a2)
{
  int v4; // eax
  int v5; // [esp+0h] [ebp-8h]
  int v6; // [esp+4h] [ebp-4h]

  this[1] = 0;
  this[2] = 0;
  this[3] = 0;
  if ( !a2 )
    return 0;
  if ( a2 > 0x2222222 )
    sub_100144A7(v5, v6);
  v4 = sub_1000E930(a2);
  this[1] = v4;
  this[2] = v4;
  this[3] = v4 + 120 * a2;
  return 1;
}
