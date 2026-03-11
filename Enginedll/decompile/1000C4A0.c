/*
 * func-name: sub_1000C4A0
 * func-address: 0x1000c4a0
 * callers: 0x100268d0
 * callees: 0x1000a560, 0x10051fd0
 */

char __thiscall sub_1000C4A0(_DWORD *this, unsigned int a2)
{
  int v4; // eax

  this[1] = 0;
  this[2] = 0;
  this[3] = 0;
  if ( !a2 )
    return 0;
  if ( a2 > 0x15555555 )
    sub_1000A560();
  v4 = sub_10051FD0(a2);
  this[1] = v4;
  this[2] = v4;
  this[3] = v4 + 12 * a2;
  return 1;
}
