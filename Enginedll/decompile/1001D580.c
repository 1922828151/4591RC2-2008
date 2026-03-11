/*
 * func-name: sub_1001D580
 * func-address: 0x1001d580
 * callers: 0x10025c40
 * callees: 0x1001a670, 0x1001b350
 */

char __thiscall sub_1001D580(_DWORD *this, unsigned int a2)
{
  char *v4; // eax

  this[1] = 0;
  this[2] = 0;
  this[3] = 0;
  if ( !a2 )
    return 0;
  if ( a2 > 0xFFFFFFF )
    sub_1001A670();
  v4 = (char *)sub_1001B350(a2);
  this[1] = v4;
  this[2] = v4;
  this[3] = &v4[16 * a2];
  return 1;
}
