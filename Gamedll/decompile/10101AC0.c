/*
 * func-name: sub_10101AC0
 * func-address: 0x10101ac0
 * callers: 0x10007fea
 * callees: 0x100022e3, 0x1000af42
 */

char __thiscall sub_10101AC0(_DWORD *this, unsigned int a2)
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
    sub_100022E3(v5, v6);
  v4 = sub_1000AF42(a2);
  this[1] = v4;
  this[2] = v4;
  this[3] = v4 + 4 * a2;
  return 1;
}
