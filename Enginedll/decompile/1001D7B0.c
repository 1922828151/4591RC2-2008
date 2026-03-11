/*
 * func-name: sub_1001D7B0
 * func-address: 0x1001d7b0
 * callers: 0x10026a30
 * callees: 0x1001a9b0, 0x10095080
 */

char __thiscall sub_1001D7B0(_DWORD *this, unsigned int a2)
{
  int v4; // eax

  this[1] = 0;
  this[2] = 0;
  this[3] = 0;
  if ( !a2 )
    return 0;
  if ( a2 > 0x1FFFFFFF )
    sub_1001A9B0();
  v4 = sub_10095080(a2);
  this[1] = v4;
  this[2] = v4;
  this[3] = v4 + 8 * a2;
  return 1;
}
