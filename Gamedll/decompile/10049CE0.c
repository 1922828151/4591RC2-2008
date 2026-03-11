/*
 * func-name: sub_10049CE0
 * func-address: 0x10049ce0
 * callers: 0x10003d1e
 * callees: 0x10007e00, 0x10013af2
 */

char __thiscall sub_10049CE0(_DWORD *this, unsigned int a2)
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
    sub_10013AF2(v5, v6);
  v4 = sub_10007E00(a2);
  this[1] = v4;
  this[2] = v4;
  this[3] = v4 + 4 * a2;
  return 1;
}
