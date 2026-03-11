/*
 * func-name: sub_101D9B60
 * func-address: 0x101d9b60
 * callers: 0x10009b3d
 * callees: 0x10009fac, 0x10011964
 */

char __thiscall sub_101D9B60(_DWORD *this, unsigned int a2)
{
  int v4; // eax
  int v5; // [esp+0h] [ebp-8h]
  int v6; // [esp+4h] [ebp-4h]

  this[1] = 0;
  this[2] = 0;
  this[3] = 0;
  if ( !a2 )
    return 0;
  if ( a2 > 0x30C30C3 )
    sub_10011964(v5, v6);
  v4 = sub_10009FAC(a2);
  this[1] = v4;
  this[2] = v4;
  this[3] = v4 + 84 * a2;
  return 1;
}
