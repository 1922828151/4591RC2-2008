/*
 * func-name: sub_100520F0
 * func-address: 0x100520f0
 * callers: 0x10053de0
 * callees: 0x10051df0, 0x10051f70
 */

char __thiscall sub_100520F0(_DWORD *this, unsigned int a2)
{
  char *v4; // eax

  this[1] = 0;
  this[2] = 0;
  this[3] = 0;
  if ( !a2 )
    return 0;
  if ( a2 > 0x2492492 )
    sub_10051DF0();
  v4 = (char *)sub_10051F70(a2);
  this[1] = v4;
  this[2] = v4;
  this[3] = &v4[112 * a2];
  return 1;
}
