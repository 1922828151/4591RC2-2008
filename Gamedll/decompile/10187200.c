/*
 * func-name: sub_10187200
 * func-address: 0x10187200
 * callers: 0x1000916f
 * callees: 0x100122e2, 0x100179f4
 */

char __thiscall sub_10187200(_DWORD *this, unsigned int a2)
{
  int v4; // eax
  int v5; // [esp+0h] [ebp-8h]
  int v6; // [esp+4h] [ebp-4h]

  this[1] = 0;
  this[2] = 0;
  this[3] = 0;
  if ( !a2 )
    return 0;
  if ( a2 > 0x3FFFFFFF )
    sub_100179F4(v5, v6);
  v4 = sub_100122E2(a2);
  this[1] = v4;
  this[2] = v4;
  this[3] = v4 + 4 * a2;
  return 1;
}
