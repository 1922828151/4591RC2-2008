/*
 * func-name: sub_1010EBB0
 * func-address: 0x1010ebb0
 * callers: 0x10115d40
 * callees: 0x1008fa90, 0x1010e2d0
 */

char __thiscall sub_1010EBB0(_DWORD *this, unsigned int a2)
{
  char *v4; // eax

  this[1] = 0;
  this[2] = 0;
  this[3] = 0;
  if ( !a2 )
    return 0;
  if ( a2 > 0x7FFFFFF )
    sub_1010E2D0();
  v4 = (char *)sub_1008FA90(a2);
  this[1] = v4;
  this[2] = v4;
  this[3] = &v4[32 * a2];
  return 1;
}
