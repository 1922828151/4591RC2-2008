/*
 * func-name: sub_101AC6D0
 * func-address: 0x101ac6d0
 * callers: 0x100068fc
 * callees: 0x10013386, 0x10016347
 */

char __thiscall sub_101AC6D0(_DWORD *this, unsigned int a2)
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
    sub_10013386(v5, v6);
  v4 = sub_10016347(a2);
  this[1] = v4;
  this[2] = v4;
  this[3] = v4 + 4 * a2;
  return 1;
}
