/*
 * func-name: sub_1000C4F0
 * func-address: 0x1000c4f0
 * callers: 0x10012f30
 * callees: 0x1000a5e0, 0x1000a910
 */

char __thiscall sub_1000C4F0(_DWORD *this, unsigned int a2)
{
  char *v4; // eax

  this[1] = 0;
  this[2] = 0;
  this[3] = 0;
  if ( !a2 )
    return 0;
  if ( a2 > 0x1D41D41 )
    sub_1000A5E0();
  v4 = (char *)sub_1000A910(a2);
  this[1] = v4;
  this[2] = v4;
  this[3] = &v4[140 * a2];
  return 1;
}
