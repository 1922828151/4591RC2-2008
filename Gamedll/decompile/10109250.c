/*
 * func-name: sub_10109250
 * func-address: 0x10109250
 * callers: 0x100110ea
 * callees: 0x1000d26f, 0x1001abb3
 */

char __thiscall sub_10109250(_DWORD *this, unsigned int a2)
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
    sub_1001ABB3(v5, v6);
  v4 = sub_1000D26F(a2);
  this[1] = v4;
  this[2] = v4;
  this[3] = v4 + 56 * a2;
  return 1;
}
