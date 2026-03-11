/*
 * func-name: sub_10049E10
 * func-address: 0x10049e10
 * callers: 0x10004ff7
 * callees: 0x10004fde, 0x100145b0
 */

char __thiscall sub_10049E10(_DWORD *this, unsigned int a2)
{
  int v4; // eax
  int v5; // [esp+0h] [ebp-8h]
  int v6; // [esp+4h] [ebp-4h]

  this[1] = 0;
  this[2] = 0;
  this[3] = 0;
  if ( !a2 )
    return 0;
  if ( a2 > 0x3333333 )
    sub_10004FDE(v5, v6);
  v4 = sub_100145B0(a2);
  this[1] = v4;
  this[2] = v4;
  this[3] = v4 + 80 * a2;
  return 1;
}
