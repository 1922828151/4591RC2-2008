/*
 * func-name: sub_1003B480
 * func-address: 0x1003b480
 * callers: 0x1003cac0
 * callees: 0x1003b220, 0x1003b3c0
 */

char __thiscall sub_1003B480(_DWORD *this, unsigned int a2)
{
  char *v4; // eax

  this[1] = 0;
  this[2] = 0;
  this[3] = 0;
  if ( !a2 )
    return 0;
  if ( a2 > 0x3333333 )
    sub_1003B220();
  v4 = (char *)sub_1003B3C0(a2);
  this[1] = v4;
  this[2] = v4;
  this[3] = &v4[80 * a2];
  return 1;
}
