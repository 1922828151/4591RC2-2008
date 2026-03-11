/*
 * func-name: sub_10123850
 * func-address: 0x10123850
 * callers: 0x1001920e
 * callees: 0x100106ef, 0x10011991
 */

char __thiscall sub_10123850(_DWORD *this, unsigned int a2)
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
    sub_10011991(v5, v6);
  v4 = sub_100106EF(a2);
  this[1] = v4;
  this[2] = v4;
  this[3] = v4 + 4 * a2;
  return 1;
}
