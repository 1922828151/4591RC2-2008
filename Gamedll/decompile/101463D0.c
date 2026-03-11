/*
 * func-name: sub_101463D0
 * func-address: 0x101463d0
 * callers: 0x10016072
 * callees: 0x1000d7f6, 0x10014b05
 */

char __thiscall sub_101463D0(_DWORD *this, unsigned int a2)
{
  int v4; // eax
  int v5; // [esp+0h] [ebp-8h]
  int v6; // [esp+4h] [ebp-4h]

  this[1] = 0;
  this[2] = 0;
  this[3] = 0;
  if ( !a2 )
    return 0;
  if ( a2 > 0x1FFFFFFF )
    sub_10014B05(v5, v6);
  v4 = sub_1000D7F6(a2);
  this[1] = v4;
  this[2] = v4;
  this[3] = v4 + 8 * a2;
  return 1;
}
