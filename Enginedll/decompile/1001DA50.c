/*
 * func-name: sub_1001DA50
 * func-address: 0x1001da50
 * callers: 0x1002f4a0
 * callees: 0x1001ad30, 0x1008fa90
 */

char __thiscall sub_1001DA50(_DWORD *this, unsigned int a2)
{
  int v4; // eax

  this[1] = 0;
  this[2] = 0;
  this[3] = 0;
  if ( !a2 )
    return 0;
  if ( a2 > 0x7FFFFFF )
    sub_1001AD30();
  v4 = sub_1008FA90(a2);
  this[1] = v4;
  this[2] = v4;
  this[3] = v4 + 32 * a2;
  return 1;
}
