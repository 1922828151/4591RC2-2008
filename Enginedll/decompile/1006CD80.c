/*
 * func-name: sub_1006CD80
 * func-address: 0x1006cd80
 * callers: 0x1006f6d0
 * callees: 0x1006c100, 0x1006c4d0
 */

char __thiscall sub_1006CD80(_DWORD *this, unsigned int a2)
{
  char *v4; // eax

  this[1] = 0;
  this[2] = 0;
  this[3] = 0;
  if ( !a2 )
    return 0;
  if ( a2 > 0xCCCCCCC )
    sub_1006C100();
  v4 = (char *)sub_1006C4D0(a2);
  this[1] = v4;
  this[2] = v4;
  this[3] = &v4[20 * a2];
  return 1;
}
