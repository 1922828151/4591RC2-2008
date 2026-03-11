/*
 * func-name: sub_1001D760
 * func-address: 0x1001d760
 * callers: 0x101770d0
 * callees: 0x1000a660, 0x10159390
 */

char __thiscall sub_1001D760(_DWORD *this, unsigned int a2)
{
  int v4; // eax

  this[1] = 0;
  this[2] = 0;
  this[3] = 0;
  if ( !a2 )
    return 0;
  if ( a2 > 0x30C30C3 )
    sub_1000A660();
  v4 = sub_10159390(a2);
  this[1] = v4;
  this[2] = v4;
  this[3] = v4 + 84 * a2;
  return 1;
}
