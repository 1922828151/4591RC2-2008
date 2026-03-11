/*
 * func-name: sub_1025A8C0
 * func-address: 0x1025a8c0
 * callers: 0x100184b2
 * callees: 0x1001177f, 0x1001963c
 */

char __thiscall sub_1025A8C0(_DWORD *this, unsigned int a2)
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
    sub_1001177F(v5, v6);
  v4 = sub_1001963C(a2);
  this[1] = v4;
  this[2] = v4;
  this[3] = v4 + 80 * a2;
  return 1;
}
