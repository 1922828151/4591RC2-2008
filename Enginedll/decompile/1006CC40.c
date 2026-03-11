/*
 * func-name: sub_1006CC40
 * func-address: 0x1006cc40
 * callers: 0x1006f440
 * callees: 0x1006bf00, 0x10095080
 */

char __thiscall sub_1006CC40(_DWORD *this, unsigned int a2)
{
  int v4; // eax

  this[1] = 0;
  this[2] = 0;
  this[3] = 0;
  if ( !a2 )
    return 0;
  if ( a2 > 0x1FFFFFFF )
    sub_1006BF00();
  v4 = sub_10095080(a2);
  this[1] = v4;
  this[2] = v4;
  this[3] = v4 + 8 * a2;
  return 1;
}
