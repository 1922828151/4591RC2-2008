/*
 * func-name: sub_100574A0
 * func-address: 0x100574a0
 * callers: 0x1005e7d0
 * callees: 0x10056d80, 0x10057020
 */

char __thiscall sub_100574A0(_DWORD *this, unsigned int a2)
{
  char *v4; // eax

  this[1] = 0;
  this[2] = 0;
  this[3] = 0;
  if ( !a2 )
    return 0;
  if ( a2 > 0x4EC4EC4 )
    sub_10056D80();
  v4 = (char *)sub_10057020(a2);
  this[1] = v4;
  this[2] = v4;
  this[3] = &v4[52 * a2];
  return 1;
}
