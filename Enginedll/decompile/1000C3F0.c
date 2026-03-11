/*
 * func-name: sub_1000C3F0
 * func-address: 0x1000c3f0
 * callers: 0x1000f380, 0x10011510
 * callees: 0x1000a460, 0x1000a840
 */

char __thiscall sub_1000C3F0(_DWORD *this, unsigned int a2)
{
  char *v4; // eax

  this[1] = 0;
  this[2] = 0;
  this[3] = 0;
  if ( !a2 )
    return 0;
  if ( a2 > 0x9249249 )
    sub_1000A460();
  v4 = (char *)sub_1000A840(a2);
  this[1] = v4;
  this[2] = v4;
  this[3] = &v4[28 * a2];
  return 1;
}
