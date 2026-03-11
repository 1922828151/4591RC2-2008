/*
 * func-name: sub_100CECD0
 * func-address: 0x100cecd0
 * callers: 0x100d3e00
 * callees: 0x100ce0d0, 0x100ce410
 */

char __thiscall sub_100CECD0(_DWORD *this, unsigned int a2)
{
  char *v4; // eax

  this[1] = 0;
  this[2] = 0;
  this[3] = 0;
  if ( !a2 )
    return 0;
  if ( a2 > 0x71C71C7 )
    sub_100CE0D0();
  v4 = (char *)sub_100CE410(a2);
  this[1] = v4;
  this[2] = v4;
  this[3] = &v4[36 * a2];
  return 1;
}
